#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 4

int items[MAX_SIZE];
int front = -1, rear = -1;

// Function to check if the queue is empty
int isEmpty() {
    return front == -1 && rear == -1;
}

// Function to check if the queue is full
int isFull() {
    return (rear-front) == MAX_SIZE - 1;
}

// Function to add an element to the queue
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    }
    if (isEmpty()) {
        front = 0;
    }
    rear++;
    items[rear] = value;
}

// Function to remove an element from the queue
int dequeue() {
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    }
    int removed = items[front];
    if (front == rear) {
        // Queue has only one element, so reset front and rear
        front = -1;
        rear = -1;
    } else {
        front++;
    }
    return removed;
}

// Function to display the elements of the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", items[i]);
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();

    printf("Dequeued element: %d\n", dequeue());

    display();
    enqueue(50);
    display();

    return 0;
}
