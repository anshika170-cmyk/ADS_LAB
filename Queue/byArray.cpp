#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
class Queue{
    public:
    int data[SIZE];
    int front,rear;
    void initialize(){
        front=rear=-1;
    }
    bool isEmpty(){
        return front==-1;
    }
    bool isFull(){
        return rear==SIZE-1;
    }
    void enqueue(int info){
        if(rear==SIZE-1){
        cout<<"Queue is full"<<endl;
        return;
        }
        if(front==-1)
          front=front+1;
          rear=rear+1;
          data[rear]=info;
    }
    int dequeue(){
        int item;
        if(front==-1){
            cout<<endl<<"Queue is empty"<<endl;
            return -1;
        }
        item=data[front];
        if(front==rear)
          front=rear=1;
          else 
          front =front+1;
        return item;
    }
    void traverse(){
        if(isEmpty())
        {
            cout<<"Queue is Empty"<<endl;
            return;
        }
        for(int i=front;i<rear;i++)
        {
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }
};
