#include<bits/stdc++.h>
using namespace std;
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

//insert at head
void insertathead(Node* &head, int n){
  Node* temp= new Node(n);
  temp -> next = head;
  head = temp;
}
//Printing
void print(Node* &head){
 
     Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp ->next;
    }
    cout << endl;
}

Node* detectloop(Node* head){
     Node* slow=head;
        Node* fast=head;
        while(slow!=NULL && fast!=NULL){
           fast=fast->next;
           if(fast->next!=NULL)
           fast=fast->next;
           slow=slow->next;
           if(fast==slow) {
            cout<<slow->data<<" ";
            return slow;
            }
}
}

Node* findstart(Node* head, Node* slow){
    Node*initial=head;
    while(initial!=slow){
        initial=initial->next;
        slow=slow->next;
    }
    cout<<initial->data;
    return initial;
}
void deloop(Node* starting){
    Node* temp=starting->next;
    Node* back=starting;
    while(temp!=starting){
    temp=temp->next;
    back=back->next;

    }
    cout<<temp->data<<" ";
    cout<<back->data<<" ";
    back->next=NULL;
}

int main (){
    int m=1, n=2;
    Node* node1 = new Node(7);
    Node* head=node1;
    insertathead( head, 6);
    insertathead( head, 5);
    insertathead( head, 4);
    insertathead( head, 3);
    insertathead( head, 2);
    insertathead( head, 1);
    int s=2;
    Node* start=head;
   while(s--){
    start=start->next;
   }
   cout<<start->data<<" ";
   int e=6;
    Node* end=head;
   while(e--){
    end=end->next;
   }
   cout<<end->data;
   end->next=start;
   cout<<endl;
   Node* point=detectloop(head);
   Node* starting=findstart(head,point);
    deloop(starting);
    print (head);

}