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

   Node* getMiddle(Node *head)
    {
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast ->next != NULL) {
    fast = fast -> next ->next;
    slow = slow -> next;
    }
    return slow->next;
    }
    bool check(Node* head , Node* mid){
        Node* head1=head;
        Node* head2=mid;
        while(head2 != NULL) {
            if(head2->data != head1->data) {
                return 0;
            }
            head1 = head1 -> next;
            head2 = head2 -> next;
        }
        return true;
    }
    Node* reverse(Node* head) {
        
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        while(curr != NULL) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

int main (){
    Node* node1 = new Node(1);
    Node* head=node1;
    insertathead( head, 2);
    insertathead( head, 1);
    Node* noder=getMiddle(head);

    Node* nodem=reverse(noder);
    cout<<check(head,nodem)<<"<-";
   
    print (head);
    return 0;
} 