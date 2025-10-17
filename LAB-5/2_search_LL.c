#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
}Node;

Node* addNode(Node *head, int data)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data   = data;
    
    struct Node *temp = head;
    if(head == NULL)
    {
        head = newNode;
        newNode->next = NULL;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = NULL;
    }
    return head;
}
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int searchList(Node* head, int key)
{
    Node *temp = head;
    int i=1;
    while(temp != NULL)
    {
        if(temp->data == key)
            return i; 
        temp = temp->next;
        i++;
    }
    return -1;
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
        head = addNode(head, data);
    }
    printList(head);

    printf("Enter data to search: ");
    int key, found = 0;
    scanf("%d", &key);

    found = searchList(head, key);
    if (found==-1)
        printf("Element not found in the List\n");
    else
        printf("Element found at position %d\n", found);
}