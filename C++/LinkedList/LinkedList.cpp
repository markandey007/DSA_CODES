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
void insertAtTail(Node* &tail, int d) {
        //step 1: cration of Node
        Node* newNode = new Node(d);
        //step2: 
        tail->next = newNode;
        //step3: head update;
        tail = newNode;
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

Node* del(Node* &head){
       if(head==NULL || head->next==NULL)return head;
  while(head->data==head->next->data) head=head->next->next;
        if(head==NULL || head->next==NULL)return head;

        Node* temp=head;
        Node* prev=NULL;
        
        while(temp->next!=NULL){
            if(temp->data==temp->next->data) {
                while(temp->data==temp->next->data){
                    cout<<"hi";
                    temp=temp->next;
                }
                prev->next=temp->next->next;
                if(temp->next->next){
                temp=temp->next->next;
                }
                else{
                    temp->next=NULL;
                }
                cout<<prev->data<<" ";
                cout<<temp->data;
            }
            else
            {
            prev=temp;
            temp=temp->next;
            }
        }
        return head;
    }
int main (){
    int m=1, n=2;
    Node* node1 = new Node(8);
    Node* head=node1;
    insertathead( head, 8);
    insertathead( head, 5);
    insertathead( head, 4);
    insertathead( head, 3);
    insertathead( head, 3);
    insertathead( head, 2);
  //  insertathead( head, 2);
    insertathead( head, 2);
    insertathead( head, 1);
    insertathead( head, 1);
     insertathead( head, 0);
    
    print (head);
    del(head);
    print (head);

    
    
    return 0;
} 