#include <bits/stdc++.h>
using namespace std;
# define MAX 100
class Queue {
	int front, rear, size;
public:
int a[];
    Queue(int s){
        size=s;
        a[size];
        front = -1;
        rear = -1;
        }
    bool enqueue(int x);
    int dequeue();
    int peek();
    bool isEmpty();
    void print();
};
bool Queue::enqueue(int x){
    if(rear == size){
        cout<<"Queue is full";
        return false;
    }
    else{
        if(front == -1){
            front = 0;
        }
        rear++;
        a[rear] = x;
        return true;
    }
}
int Queue::dequeue(){
    if(front == -1){
        cout<<"Queue is empty";
        return 0;
    }
    else{
        int x = a[front];
        if(front == rear){
            front = -1;
            rear = -1;
        }
        else{
            front++;
        }
        return x;
    }
}
int Queue::peek(){
    if(front == -1){
        cout<<"Queue is empty";
        return 0;
    }
    else{
        int x = a[front];
        cout<<x<<" ";
        return x;
    }
}
bool Queue::isEmpty(){
    return (front == -1);
}
void Queue::print(){
    while(!isEmpty()){
        peek();
        dequeue();
    }
}
int main(){
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout<<"The front element is: ";
    q.peek();
    cout<<endl;
    cout<<"The queue is: ";
    q.print();
}
