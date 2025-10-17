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
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
Node* mergeSortedLists(Node* l1, Node* l2) {
    Node* dummy = (Node*)malloc(sizeof(Node));
    dummy->next = NULL;
    dummy->data = 0;
    Node* current = dummy;
    while (l1 != NULL && l2 != NULL) {
        if (l1->data < l2->data) {
            current->next = l1;
            l1 = l1->next;
        } else {
            current->next = l2;
            l2 = l2->next;
        }
        current = current->next;
    }
    if (l1 != NULL) {
        current->next = l1;
    } else {
        current->next = l2;
    }
    Node* mergedHead = dummy->next;
    free(dummy);
    return mergedHead;
}
void main()
{
    Node* head1 = NULL;
    Node* head2 = NULL;

    int n1, n2,data;
    printf("Enter number of elements in list 1:");
    scanf("%d", &n1);

    printf("\nEnter number of elements in list 2:");
    scanf("%d", &n2);

    printf("Enter elements of list 1 in sorted order:\n");
    for(int i=0;i<n1;i++)
    {
        printf("Enter data for the node %d:",i+1);
        scanf("%d",&data);
        head1 = addNode(head1,data);
    }
    printf("Enter elements of list 2 in sorted order:\n");
    for(int i=0;i<n2;i++)
    {
        printf("Enter data for the node %d:",i+1);
        scanf("%d",&data);
        head2= addNode(head2,data);
    }

    printf("List 1 :\n");
    printList(head1);
    printf("List 2 :\n");
    printList(head2);
    Node* mergedHead = mergeSortedLists(head1, head2);
    printf("Merged Sorted List:\n");
    printList(mergedHead);
}
