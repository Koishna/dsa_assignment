#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* createNode(int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertEnd(Node** head, int data){
    Node* newNode = createNode(data);
    if (*head == NULL){
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void traverse(Node* head) {
    Node* temp = head;
    printf("Forward Traversal: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    } 
    printf("\n");
}

void reverseTraverse(Node* head){
    if (head == NULL){
        return;
    }
    reverseTraverse(head->next);
    printf("%d ", head->data);
}

int main(){
    Node* head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);

    traverse(head);

    printf("Reverse Traversal: ");
    reverseTraverse(head);
    printf("\n");
    return 0;
}