#include<iostream>
using namespace std;

#define size 5
int queue[size];
int front = -1, rear = -1;

bool isFull() {
    return ((front == 0 && rear == size - 1) || (rear + 1) % size == front);
}

bool isEmpty() {
    return (front == -1);
}

void enqueue(int data) {
    if (isFull()) {
        cout << "Queue is full." << endl;
        return;
    }
    else{
         rear = (rear + 1) % size;
         queue[rear] = data;
        cout << data << " inserted to the queue." << endl;
        if(front==-1)
        front=0;
}
}
int dequeue() {
    if (isEmpty()) {
        cout << "The queue is empty." << endl;
        return -1;
    }
    int data = queue[front];
    if (front == rear) {
    front = rear = -1;
    } else {
        front = (front + 1) % size;
    }
    cout<< "Deleted element " << data<< endl;
    return data;
}

void display() {
    if (isEmpty()) {
        cout << "The queue is empty." << endl;
        return;
    }
    cout << "Queue: ";
    int i = front;
    while (i!=rear) {
        cout << queue[i] << " ";
        i = (i + 1) % size;
    }
    cout << queue[i]<<endl;
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();
    dequeue();
    display();
    enqueue(4);
    enqueue(5);
    enqueue(6);
    enqueue(7);
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();
    dequeue();
    dequeue();
    return 0;
}
