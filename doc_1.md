Documentation 

A. Data structures are defined
1. A stack is implemented using a character array.
    -char values[MAX]: fixed size array to store opening brackets where MAX is the maximum size of the stack.
    -int top: index of the current top element 
2. Only opening brackets are pushed in the stack i.e '(', '{', '['

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
6. isBalanced(char)
    -checks whether the expression has balanced parentheses/brackets.
    -pushes opening brackets to the stack.
    -on a closing bracket, pops and verifies the matching open bracket.
    -if a mismatch is found, premature closing or if leftover openings are found, it is not balanced.
    -prints balanced or not balanced.

C. The main() function
    -defines the aray of the test expressions.
    -iterates through each expression.
    -calls function isBalanced().

D. Output
    Expression: a + (b - c) * (d
    Not Balanced
    Expression: m + [a - b * (c + d * {m)]
    Not Balanced
    Expression: a + (b - c)
    Balanced
