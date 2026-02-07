#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

Node* createNode(int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertAfter(Node* prevNode, int data){
    if(prevNode == NULL){
        printf("Previous node cannot be NULL\n");
        return;
    }

    Node* newNode = createNode(data);
    newNode->next = prevNode->next;
    newNode->prev = prevNode;

    if (prevNode->next != NULL){
        prevNode->next->prev = newNode;
    }
    prevNode->next = newNode;
}

void deleteNode(Node** head, Node* delNode){
    if (*head == NULL || delNode == NULL){
        return;
    }

    if (*head == delNode){
        *head = delNode->next;
    }

    if (delNode->next != NULL){
        delNode->next->prev = delNode->prev;
    }

    if (delNode->prev != NULL){
        delNode->prev->next = delNode->next;
    }
    free(delNode);
}

void traverse(Node* head){
    Node* temp = head;
    printf("Forward Traversal: ");
    while (temp != NULL) {
        printf("%d ", temp->data);  // space added
        temp = temp->next;
    }
    printf("\n");
}

void reverseTraverse(Node* tail){
    Node* temp = tail;
    printf("Reverse Traversal: ");
    while (temp != NULL){
        printf("%d ", temp->data);  // space added
        temp = temp->prev;
    }
    printf ("\n");
}

int main() {
    Node* head = createNode(10);
    Node* second = createNode(20);
    Node* third = createNode(30);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    traverse(head);

    insertAfter(second, 25);
    printf("After inserting 25 after 20:\n");
    traverse(head);

    deleteNode(&head, third);
    printf("After deleting 30:\n");
    traverse(head);

    Node* tail = head;
    while (tail->next != NULL){
        tail = tail->next;
    }
    reverseTraverse(tail);

    return 0;
}
