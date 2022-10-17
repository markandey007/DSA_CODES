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

class CQueue {
	Node *front;
    Node *rear;
    public:
	CQueue()
	{
		front = rear = NULL;
	}

    void push(int x)
	{
		// Create a new LL node
		Node* temp = new Node(x);
		temp->data = x;
        if (front == NULL)
            front = temp;
    else
           rear->next = temp;
  
    rear = temp;
    rear->next = front;
	}

    void pop()
	{
       if (front == NULL) {
        printf("Queue is empty");
        return;
    }
  
    // If this is the last node to be deleted
    int value; // Value to be dequeued
    if (front == rear) {
        value = front->data;
        free(front);
        front = NULL;
        rear = NULL;
    }
    else // There are more than one nodes
    {
        struct Node* temp = front;
        value = temp->data;
        front = front->next;
        rear->next = front;
        free(temp);
    }
    cout<<value<<"<-Deleted"<<endl;
    return ;
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



    void print()
{
    struct Node* temp = front;
    printf("\nElements in Circular Queue are: ");
    while (temp->next != front) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d", temp->data);
    cout<<endl;
}
};
int main()
{
    cout<<endl;
	CQueue q;
	q.push(10);
	q.push(20);
	q.pop();
	q.push(30);
	q.push(40);
	q.push(50);
	q.pop();
    q.print();
	cout << "Queue Front-> " << q.gfront()<< endl;
	cout << "Queue empty-> " << q.isempty();
}