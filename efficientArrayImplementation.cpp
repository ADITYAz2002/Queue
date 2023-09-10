//Using circular array

#include <iostream>
using namespace std;

struct Queue
{
    int *arr;

    int cap, size, front;

    Queue(int c)
    {
        arr = new int[c];
        size = 0;
        cap = c;
        front = 0;
    }

    bool isFull()
    {
        return (size == cap);
    }

    bool isEmpty()
    {
        return (size == 0);
    }

    int getfront()
    {
        if(isEmpty())
            return -1;
        
        return front;
    }

    int getRear()
    {
        if(isEmpty())
            return -1;

        return (front + size - 1) % cap;
    }

    void enque(int x)
    {
        if(isFull())
            return;
        
        int rear = getRear();
        rear = (rear + 1) % cap;    //increment rear and point to next/other element
        arr[rear] = x;
        size++;
    }

    void deque()
    {
        if(isFull())
            return;
        
        int front = getfront();     
        front = (front + 1) % cap;  //increment front and point to next/other element
        size--;
    }
};
