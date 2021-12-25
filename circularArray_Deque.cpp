//Implementation of deque pr double ended queue using circular array;

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

void push_back(int x)
{
    if(isFull()) return;
    else if(isEmpty()) rear=front=0;
    else rear = (rear+1)%n;
    
    arr[rear] = x;
}

void push_front(int x)
{
    if(isFull()) return;
    else if(isEmpty()) rear=front=0;
    else front=(front+n-1)%n;
    
    arr[front] = x;
}

void pop_front()
{
    if(isEmpty()) return;
    else if(front == rear) front=rear=-1;
    else front = (front+1)%n;
}

void pop_back()
{
    if(isEmpty()) return;
    else if(front == rear) front=rear=-1;
    else rear = (rear+n-1)%n;
}

int first()
{
    return arr[front];
}

int last()
{
    return arr[rear];
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
   push_front(2);
   push_front(3);
   push_front(4);
   push_back(5);
   push_back(6);
  pop_back();
  pop_front();
   push_front(7);
//   cout<<first();
   display();
   return 0;
}
