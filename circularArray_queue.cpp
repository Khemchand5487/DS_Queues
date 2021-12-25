//Implementation of queue using circular array;

#include <bits/stdc++.h>

using namespace std;

int n=6;
int arr[6];
int front=-1, rear=-1;

bool isEmpty()
{
    if(rear==-1 && front ==-1) return true;
    else return false;
}

bool isFull()
{
    if((rear+1)%n == front) return true;
    else return false;
}

void enqueue(int x)
{
    if(isFull()) return;
    else if(isEmpty()) rear=front=0;
    else rear = (rear+1)%n;
    
    arr[rear] = x;
}

void dequeue()
{
    if(isEmpty()) return;
    else if(front == rear) front=rear=-1;
    else front = (front+1)%n;
}

int first()
{
    return arr[front];
}

void display()
{
    for(int i=front;i!=rear;i=(i+1)%n)
    {
        cout<<arr[i]<<" ";
    }
    cout<<arr[rear]<<endl;
}

int main()
{
   enqueue(1);
   enqueue(2);
   enqueue(3);
   enqueue(4);
   enqueue(5);
   enqueue(6);
   dequeue();
   dequeue();
   enqueue(7);
   enqueue(8);
//   cout<<first();
   display();
   return 0;
}
