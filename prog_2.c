#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 50

typedef struct {
    char data[MAX];
    int top;
}Stack;

void init(Stack *s){
    s->top= -1;
}

int isEmpty(Stack *s){
    return s-> top == -1;
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
    s->data[++(s->top)]= c;
}

//pop
char pop(Stack *s){
    if(isEmpty(s)){
        printf("Stack underflow\n");
        return '\0';
    }
    return s->data[(s->top)--];
}

char peek(Stack *s){
    if(isEmpty(s)){
        printf("Stack underflow\n");
        return '\0';
    }
    return s->data[s->top];
}

int precedence(char op){
    if (op == '+' || op == '-'){
        return 1;
    }
    if (op == '*' || op == '/'){
        return 2;
    }
    return 0;
}

void infixToPostfix(char *infix, char *postfix){
    Stack s;
    init(&s);
    int i = 0, j=0;
    
    while (infix[i]!='\0'){
        if (isalnum(infix[i])){
            postfix[j++] = infix[i];
        } else if (infix[i] == '('){
            push(&s, infix[i]);
        } else if (infix[i] == ')'){
            while (!isEmpty(&s) && peek(&s) != '('){
                postfix[j++] = pop(&s);
            }
            pop(&s);
        } else {
            while (!isEmpty(&s) && precedence(peek(&s)) >= precedence(infix[i])){
                postfix[j++] = pop(&s);
            }
            push(&s, infix[i]);
        }
        i++;
    }

    while (!isEmpty(&s)){
        postfix[j++] = pop(&s);
    }
    postfix[j] = '\0';
}

int main(){
    char infix[MAX], postfix[MAX];

    printf("Enter an infix expression:");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);
    printf("Postfix: %s\n", postfix);

    return 0;
}
