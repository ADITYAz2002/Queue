#include <iostream>
using namespace std;

struct Myqueue
{
    int size, cap;
    int *arr;

    Myqueue(int c)
    {
        size = 0;
        cap = c;
        arr = new int[c];
    }

    void enque(int x)
    {
        if(isFull())
            return;
        arr[size] = x;
        size++;
    }

    void deque()
    {
        if(isEmpty())
            return;
        
        for(int i = 0; i < size - 1; i++)
            arr[i] = arr[i+1];
        
        size--;
    }

    int getfront()
    {
        if(isEmpty())
            return -1;

        return 0;
    }

    int getRear()
    {
        if(isEmpty())
            return -1;

        return size-1;
    }

    bool isFull()
    {
        return (size == cap);
    }

    bool isEmpty()
    {
        return (size == 0);
    }
};
