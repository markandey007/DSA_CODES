#include <bits/stdc++.h>
using namespace std;
class Queue {

    public:
        int* arr;
        int front;
        int rear;
        int size;

        Queue(int n) {
            arr = new int[n];
            front = 0;
            rear = 0;
            size = n;
        }

        void push(int element) {
            if(rear == size) {
                cout << "OverFlow hogya " << endl;
                return;
            }
            else{
                arr[rear] = element;
                rear++;
            }
        }

        void pop() {
            if(front == rear) {
                cout << "UnderFlow hogya " << endl;
                return;
            }
            else {
                arr[front] = -1;
                front++;
                if(front == rear)
                {
                    front = rear = 0;
                }
            }
        }

        bool isEmpty() {
            if(front == rear) 
                return true;
            else
                return false;
        }

        int getSize() {
            //galat hai
            return rear-front;
        }

        int getFront() {
            if(front == rear)
                return -1;
            else
                return arr[front];
        }


};


int main() {

    Queue* q = new Queue(5);

    q->push(3);

    q->push(5);
    
    q->push(7);

    q->push(9);

    cout << "front element is " << q->getFront() << endl;

    q->pop();
    cout << "front element is " << q->getFront() << endl;

    cout << "Size of queue is " << q->getSize() << endl;

    cout << "empty or not " << q->isEmpty() << endl;


    cout << "printing all elements inside Queue " << endl;

    while(!q->isEmpty()) {
        cout << q->getFront() << " ";
        q->pop();
    }
    cout << endl;
    



    return 0;
}