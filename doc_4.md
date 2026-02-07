A. Data structures defined
    -Node Structure (struct Node)
    -Represents a single element of the doubly linked list:
        -int data: stores the value of the node.
        -struct Node* prev: pointer to the previous node.
        -struct Node* next: pointer to the next node.
    -head: pointer to the first node of the list.
    -tail: pointer to the last node of the list i.e.used for reverse traversal.
    -The doubly linked list allows traversal in both forward and backward directions.

B. Functions
1. createNode(data)
    -allocates memory for a new node.
    -sets data to the given value.
    -initializes prev and next to NULL.
    -returns a pointer to the newly created node.

2. insertAfter(prevNode, data)
    -inserts a new node after a given node (prevNode).
    -updates the next pointer of prevNode and the prev pointer of the following node.
    -displays an error if prevNode is NULL.

3. deleteNode(head, delNode)
    -deletes a specific node from the list.
    -updates prev and next pointers of neighboring nodes.
    -updates head if the first node is deleted.
    -frees the memory of the deleted node.

4. traverse(head)
    -traverses the list from head to tail.
    -prints the data of each node in order.

5. reverseTraverse(tail)
    -traverses the list from tail to head.
    -prints the data of each node in reverse order.

C. The main() function
    -creates three nodes.
    -inks the nodes to form a doubly linked list.
    -performs forward traversal and prints the list.
    -inserts 25 after 20 using insertAfter().
    -deletes node 30 using deleteNode().
    -traverses the list in both forward and reverse directions and prints the result.

D.Output
    Forward Traversal: 10 20 30
    After inserting 25 after 20:
    Forward Traversal: 10 20 25 30
    After deleting 30:
    Forward Traversal: 10 20 25
    Reverse Traversal: 25 20 10