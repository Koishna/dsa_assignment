Documentation

A. Data Structure Defined
    -Node Structure
        -reporesents a single element of the linked list.
            -int data: stores the value of node.
            -struct Node* next: pointer to the next node in the list.
            -head: pointer to the first node of the linked list.
        -the linked list dynamically grows as nodes are inserted at the end.

B. Functions
1. createNode()
    -allocates memory for a new node.
    -sets the node's data to the given value.
    -initializes next pointer to NULL.
    -returns a pointer to the newly created node.

2. insertEnd()
    -inserts a node at the end of the linked list.
    -if the list is empty, the new node becomes the head, else traverses the list to find the last node and appends the new node.

3. traverse()
    -traverse the linked list from head to end.
    -prints the data of each node in order(i.e. forward traversal)

4. reverseTraversal()
    -traverses the linked list in reverse order using recursion.
    -if head is null, return else recursively traverses the rest of the list, then prints the current node's data.

C. The main() function
    -initializes head as NULL.
    -inserts the nodes at the end of the linked list.
    -calls traverse() and displays forward order.
    -calls reverseTraverse() and display list in reverse order.

D. Output
    Forward Traversal: 10 20 30 40 
    Reverse Traversal: 40 30 20 10 