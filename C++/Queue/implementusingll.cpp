#include <bits/stdc++.h>
using namespace std;
//creting ll;
class Node{
    public:
    int data;
    Node* next;
    //Constructor
 Node(int n){
 this -> data = n;
 this ->next =NULL;
 }
};

class Queue {
	Node *front;
    Node *rear;
    public:
	Queue()
	{
		front = rear = NULL;
	}

	void push(int x)
	{
		// Create a new LL node
		Node* temp = new Node(x);
		// If queue is empty, then
		// new node is front and rear both
		if (rear == NULL) {
            rear = temp;
			front = rear;
			return;
		}
		// Add the new node at
		// the end of queue and change rear
		rear->next = temp;
		rear = temp;
	}

	// Function to remove
	// a key from given queue q
	void pop()
	{
       // cout<<"hi";
		// If queue is empty, return NULL.
		if (front == NULL){
        cout<<"Queue is empty"<<endl;
        }
		// Store previous front and
		// move front one node ahead
		Node* temp = front;
		front = front->next;
        cout<<"Popped->"<<temp->data<<endl;
		// If front becomes NULL, then
		// change rear also as NULL
		if (front == NULL){
			rear = NULL;
            cout<<"All deleted so q deleted"<<endl;
        }
		delete (temp);
	}

    bool isempty()
    {
      if (front == NULL)
      return true;
      else
      return false;
    }

    int gfront()
    {
    return front->data;
    }


};

// Driven Program
int main()
{

	Queue q;
	q.push(10);
	q.push(20);
	q.pop();
	q.push(30);
	q.push(40);
	q.push(50);
	q.pop();
	cout << "Queue Front-> " << q.gfront()<< endl;
	cout << "Queue empty-> " << q.isempty();
}
// This code is contributed by rathbhupendra
