#include <bits/stdc++.h>
using namespace std;

class item
{
public:
    int data;
    int priority; 

    item(int x = 0)
    {
        data = x;
        priority = x;//for descending priority queue(i.e. higher number has higher priority)
        // priority = -x;//for descending priority queue(i.e. lower number has higher priority)
    }
};

class Queue
{
    item *arr;
    int front;
    int back;

public:
    Queue(int n = 100)
    {
        arr = new item[n];
        front = -1;
        back = -1;
    }
    void enqueue(item element)
    {
        int n = sizeof(arr);
        if (back == n - 1)
        {
            cout << "Queue overflow" << endl;
        }
        else
        {
            if (front == -1 || front > back)
            {
                back++;
                arr[back] = element.data;
                if (front == -1)
                {
                    front++;
                }
                cout << element.data << " pushed to queue" << endl;
            }
            else
            {
                int i = back;
                back++;
                while (arr[i].priority < element.priority && (i >= 0))
                {
                    arr[i + 1] = arr[i];
                    --i;
                }
                arr[i + 1] = element.data;
                cout << element.data << " pushed to queue" << endl;
            }
        }
    }

    void dequeue()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue Underflow" << endl;
        }
        else
        {
            cout << arr[front].data << " is popped from queue" << endl;
            ++front;
        }
    }
    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue Underflow" << endl;
            return NULL;
        }
        else
        {
            return arr[front].data;
        }
    }
    bool isEmpty()
    {
        if (front == -1 || front > back)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Queue q;
    cout << q.isEmpty() << endl;
    q.enqueue(1);
    cout << q.isEmpty() << endl;
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout << q.peek() << endl;
    return 0;
}