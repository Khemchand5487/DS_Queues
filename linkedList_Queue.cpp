//Implementation of queue using Linked List;

#include <bits/stdc++.h>

using namespace std;

class Node
{
    public:
    int data;
    class Node* next;
    Node(int x)
    {
        this->data = x;
        this->next = NULL;
    }
};

class Queue
{
    public:
        Node *front=NULL, *rear=NULL;
        
        bool isEmpty()
        {
            if(front==NULL && rear==NULL) return true;
            else return false;
        }
        
        void enqueue(int x)
        {
            if(isEmpty())
            {
                Node *nn = new Node(x);
                front=rear=nn;
            }
            else
            {
                Node *nn = new Node(x);
                rear->next = nn;
                rear = nn;
            }
        }
        
        void dequeue()
        {
            if(isEmpty()) return;
            else if(front==rear)
            {
                Node *temp = front;
                front = rear = NULL;
                delete(temp);
            }
            else
            {
                Node *temp = front;
                front = front->next;
                delete(temp);
            }
        }
        
        int first()
        {
            return front->data;
        }
        
        void display()
        {
            Node *temp = front;
            while(temp)
            {
                cout<<(temp->data)<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
};

int main()
{
    Queue q;
   q.enqueue(1);
   q.enqueue(2);
   q.enqueue(3);
   q.enqueue(4);
   q.enqueue(5);
   q.enqueue(6);
   q.dequeue();
   q.dequeue();
   q.enqueue(7);
   q.enqueue(8);
//   cout<<q.first()<<endl;
   q.display();
   return 0;
}
