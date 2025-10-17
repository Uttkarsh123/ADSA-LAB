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
Node* findMiddle(Node* head)
{
    if (head == NULL) return NULL;
    
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
void main()
{
    int n,data;
    printf("Enter number of Nodes:");
    scanf("%d",&n);
    Node* head = NULL;
    for(int i=0;i<n;i++)
    {
        printf("Enter data for the node %d:",i+1);
        scanf("%d",&data);
        head = addNode(head,data);
    }
    printList(head);
    Node* middle = findMiddle(head);
    if (middle != NULL)
    {
        printf("The middle element is: %d\n", middle->data);
    }
    else
    {
        printf("The list is empty.\n");
    }
}