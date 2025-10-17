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

void removeDuplicates(struct Node* head) {
    struct Node* current = head;

    while (current != NULL && current->next != NULL) {
        if (current->data == current->next->data) {
            struct Node* temp = current->next;
            current->next = current->next->next;
            free(temp);
        } else {
            current = current->next;
        }
    }
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    printf("Enter number of nodes: ");
    int n, data;
    struct Node* head = NULL;
    scanf("%d", &n);

    printf("Enter elements in **sorted order**:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        head = addNode(head, data);  
    }


    printf("Original List:\n");
    printList(head);

    printf("Removing duplicates...\n");
    removeDuplicates(head);
    printList(head);

    return 0;
}
