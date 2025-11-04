#include <stdio.h>
#define SIZE 5
int queue[SIZE], front = -1, rear = -1;
void enqueue(int val) {
    if(rear == SIZE-1)
        printf("Queue Overflow\n");
    else {
        if(front == -1) front = 0;
        queue[++rear] = val;
    }
}
void dequeue() {
    if(front == -1 || front > rear)
        printf("Queue Underflow\n");
    else
        printf("Dequeued %d\n", queue[front++]);
}
void display() {
    if(front == -1 || front > rear)
        printf("Queue is empty\n");
    else {
        printf("Queue: ");
        for(int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}
int main() {
    int choice, val;
    while(1) {
        printf("1.Enqueue 2.Dequeue 3.Display 4.Exit: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: printf("Enter value: "); scanf("%d", &val); enqueue(val); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: return 0;
            default: printf("Invalid Option\n");
        }
    }
    return 0;
}