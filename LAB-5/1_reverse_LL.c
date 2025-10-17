#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* addNode(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}


struct Node* reverseList(struct Node* head) {
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;

    while(current != NULL)
    {
        next = current->next;
        current->next=prev;

        prev = current;
        current = next;
    }
    
    return prev;
}
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
struct Node* reverseListRecursive(struct Node* head) {
    if (head == NULL || head->next == NULL) {
        return head; 
    }

    struct Node* newHead = reverseListRecursive(head->next); 
    head->next->next = head;  
    head->next = NULL;        

    return newHead;
}
void main()
{
    printf("Enter number of nodes: ");
    int n, data;
    struct Node* head = NULL;
    scanf("%d", &n);

    for (int i=0;i<n;i++)
    {
        printf("Enter data for node %d:",i+1);
        scanf("%d", &data);
        head = addNodeAtBeginning(head, data);
    }
    printList(head);
    printf("Reversing the linked list (iterative)...\n");
    head = reverseList(head);
    printList(head);

    printf("Reversing the linked list again (recursive)...\n");
    head = reverseListRecursive(head);
    printList(head);

}