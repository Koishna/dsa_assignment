Documentation

A. Data Structure Defined
    -A stack is implemented using a structure.
    - The stack stores the operators and the parenthesis during the conversion.
    -Stack Structure
        -char data[MAX]: stores characters such as operators where MAX defines the maximum size.
        -int top: keeps track of the top position of the stack.

B. Functions
1. isEmpty()
    -checks if the stack is empty and if it is, it returns non-zero, else returns 0.
2. isFull()
    -checks if the stack is full and if it is, it returns non-zero, else returns 0.
3. push(char c)
    -checks for overflow.
    -pushes an opening bracket onto the stack.
4. pop()
    -checks for underflow.
    -removes and returns the top element of the stack.
5. peek()
    -returns the top element without removing it.
6. precendence()
    -determines the priority of the operators.
7. infixToPostfix(infix, postfix)
    -converts an infix to postfix.
        -operands are directly added to postfix.
        -operators are popped based on precedence rules.
    -After scanning, remaining operators in the stak are added to postfix.

C. The main() function
    -declares two character arrays
        -infix to store the input expression
        -postfix to store the converted expression.
    -Accepts the expression from the user.

D. Output:
    Enter an infix expression:3*4+2-3/5
    Postfix: 34*2+35/-
    Or,
    Enter an infix expression:a+b-c*d/e
    Postfix: ab+cd*e/-