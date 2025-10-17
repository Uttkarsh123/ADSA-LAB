#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* addNode(Node *head, int data)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    if(head == NULL)
    {
        newNode->next = NULL;
        head = newNode;
        return head;
    }
    struct Node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next= newNode;
    newNode->next = NULL;
    return head;
}
void printList(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
Node * deleteFromBeginning(Node *head)
{
    if(head ==NULL)
    {
        printf("List Empty \n");
        return head;
    }
    Node *temp = head;
    head = head->next;
    free(temp);
    return head;
}
Node * deleteFromEnd(Node *head)
{
    if(head == NULL)
    {
        printf("List Empty\n");
        return head;
    }
    Node *temp= head;
    while(temp->next->next !=NULL)
    {
        temp= temp->next;
    }
    free(temp->next);
    temp->next=NULL;
    return head;
}
Node * deleteAtGivenPosition(Node *head, int position)
{
    if(head == NULL)
    {
        printf("List Empty\n");
        return head;
    }
     if (position < 0) {
        printf("Invalid position.\n");
        return head;
    }

    if (position == 0) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct Node* current = head;
    for (int i = 0; i < position - 1 && current != NULL; i++) {
        current = current->next;
    }

    if (current == NULL || current->next == NULL) {
        printf("Position out of bounds.\n");
        return head;
    }

    struct Node* temp = current->next;
    current->next = current->next->next;
    free(temp);

    return head;
}
void main()
{
    int n,data;
    printf("Enter number of Nodes in the Linked List:");
    scanf("%d",&n);
    Node *head = NULL;

    for (int i=0;i<n;i++)
    {
        printf("Enter data for Node %d:",i+1);
        scanf("%d",&data);
        head = addNode(head,data);
    }
    printList(head);
    printf("Deleting Node from Beginning:\n");
    head = deleteFromBeginning(head);
    printList(head);

    printf("Deleting Node from End:\n");
    head = deleteFromEnd(head);
    printList(head);

    printf("Enter position to delete Node:");
    int position;
    scanf("%d",&position);
    head = deleteAtGivenPosition(head,position);
    printList(head);

}