#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* addNode(Node* head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    
    if (head == NULL) {
        return newNode;
    }
    
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    
    return head;
}
int detectLoop(Node* head) {
    if (head == NULL) {
        return 0;  
    }

    Node* slow = head;
    Node* fast = head;
    
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;           
        fast = fast->next->next;    

        if (slow == fast) {
            return 1;  }
    }
    return 0;  
}
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void createLoop(Node* head, int position) {
    if (head == NULL || position < 0) {
        return;
    }
    
    Node* temp = head;
    Node* loopNode = NULL;
    int currentPos = 0;

    while (temp != NULL) {
        if (currentPos == position) {
            loopNode = temp;
        }
        if (temp->next == NULL) {
            temp->next = loopNode;
            return;
        }
        temp = temp->next;
        currentPos++;
    }
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
    createLoop(head, 3);
    int result = detectLoop(head);
    if (result) {
        printf("Cycle detected in the linked list.\n");
    } else {
        printf("No cycle detected in the linked list.\n");
    }
}