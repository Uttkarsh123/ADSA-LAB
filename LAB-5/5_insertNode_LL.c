#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

Node * addNodeAtBeginning(Node *head, int data)
{
    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode->data=data;
    newNode->next = head;
    head = newNode;
    return head;
}
Node * addNodeAtEnd(Node *head, int data)
{
    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode->data=data;   
    Node *temp = head;

    while(temp ->next!=NULL)
    {
        temp= temp->next;
    }
    temp->next=newNode;
    newNode->next=NULL;
    return head;
}
Node * addNodeAtPosition(Node *head, int data,int position)
{
    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode->data=data;  

    Node *temp = head;
    int count =0;

    if(position == 0)
    {
        if(head ==NULL)
        {
            head = newNode;
            newNode->next=NULL;
            return head;
        }
        else{
            newNode->next=head;
            head=newNode;
            return head;
        }
    }

    while(temp ->next!=NULL && count<position-1)
    {
        temp= temp->next;
        count++;
    }

    if(temp == NULL)
    {
        printf("Position out of Bounds");
        free(newNode);
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}
void printList(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp= temp->next;
    }
    printf("NULL\n");
}

void main()
{
    Node *head = NULL;
    int choice,data,position;
    while (1)
    {
        printf("1. Add Node At Beginning\n");
        printf("2. Add Node At End\n");
        printf("3. Add Node At Position\n");
        printf("4. Print List\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(choice>=1 && choice<=3){
            printf("Enter data: ");
            scanf("%d", &data);
        }

        switch (choice)
        {
            case 1:
                head = addNodeAtBeginning(head, data);
                break;
            case 2:
                head = addNodeAtEnd(head ,data);
                break;
            case 3:
                printf("Enter position: ");
                scanf("%d", &position);
                head = addNodeAtPosition(head ,data,position);
                break;
            case 4:
                printList(head);
                break;
            case 5:
                exit(0);
        }   
    }
}