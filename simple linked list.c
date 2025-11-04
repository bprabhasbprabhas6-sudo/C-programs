#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
int main() {
    struct Node *head = NULL, *temp, *newNode;
    int n, val;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i+1);
        scanf("%d", &val);
        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = val;
        newNode->next = NULL;
        if(head == NULL)
            head = temp = newNode;
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    printf("Linked List: ");
    temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    return 0;
}