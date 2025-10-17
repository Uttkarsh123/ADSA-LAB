#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
}Node;

Node* addNode(Node* head ,int data)
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
int countNodes(Node *head)
{
    struct Node* temp = head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void printList(Node* head)
{
    Node* temp = head;
    printf("The linked list is:\n");
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void main()
{
    int data;
    printf("Enter data for nodes (enter -1 to stop):\n");
    Node* head = NULL;
    while (1) 
    {
        printf("Enter data: ");
        scanf("%d", &data);
        if (data == -1) {
            break;
        }
        head = addNode(head, data);
    }
    printList(head);
    int totalNodes = countNodes(head);
    printf("Total Number of Nodes are : %d\n",totalNodes);
}