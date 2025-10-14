#include <stdio.h>

struct Node {
    int data;
    struct Node* next;
};
void main()
{
    struct Node node1, node2;
    struct Node* ptr;
    
    node1.data = 10;
    node1.next = NULL;

    node2.data = 20;
    node2.next = NULL;

    node1.next = &node2;
    ptr = &node1;

    while(ptr != NULL) {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}