#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50
//stack structure
typedef struct {
    char values[MAX];
    int top;
}Stack;

//Initiazation of stack
void init (Stack *s){
    s->top = -1;
}

int isEmpty(Stack *s){
    return s->top==-1;
}

int isFull(Stack *s){
    return s->top == MAX - 1;
}

//push
void push(Stack *s, char c){
    if (isFull(s)){
        printf("Stack overflow\n");
        return;
    }
    s->values[++(s->top)]= c;
}

//pop
char pop(Stack *s){
    if(isEmpty(s)){
        printf("Stack underflow\n");
        return '\0';
    }
    return s->values[(s->top)--];
}

//peek
char peek(Stack *s){
    if(isEmpty(s)){
        return'\0';
    }
    return s->values[s->top];
}

//checking to check if balanced
int isBalanced(char *expression){
    Stack s;
    init(&s);
    int errorIndex = -1;

    for(int i=0; i<strlen(expression); i++){
        char ch = expression[i];
        if (ch=='(' || ch == '[' || ch=='{'){
            push (&s, ch);
        }
        else if (ch==')' || ch==']' || ch=='}'){
            if (isEmpty(&s)){
                errorIndex = -i; //closing without opening
                break;
            }
            char popped = pop(&s);
            if ((ch==')' && popped != '(') || (ch==']' && popped != '[') || (ch=='}' && popped != '{')){
                errorIndex = i; //mismatch found
                break;
            }
        }
    }

    if (!isEmpty(&s) && errorIndex == -1){
        errorIndex = strlen(expression);
    }

    if (errorIndex == -1){
        printf ("Balanced\n");
        return 1;
    }
    else {
        printf ("Not Balanced \n");
        return 0;
    }
}

int main(){
    char *expressions[] = {
        "a + (b - c) * (d",
        "m + [a - b * (c + d * {m)]",
        "a + (b - c)"
    };

    for (int i= 0; i<3; i++){
        printf("Expression: %s\n", expressions[i]);
        isBalanced(expressions[i]);
    }
    return 0;
}