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



  Node* segregate(Node* head) {

        if(head==NULL || head->next==NULL){
            return head;
        }

        Node *Zerohead = new Node(-1);
        Node * tailzero = Zerohead;

        Node * onehead = new Node(-1);
        Node * tailone = onehead;

        Node * twohead = new Node(-1);
        Node * tailtwo = twohead;

        Node * temp = head;

        while(temp != NULL){
            if(temp->data == 0){
                tailzero=temp;
                tailzero->next=NULL;
                
            }
            else if(temp->data == 1){
                tailone->next=temp;
                tailone=temp;
            }
            else{
                tailtwo->next=temp;
                tailtwo=temp;
            }
            temp = temp->next;
        }

print(Zerohead);
cout<<"->";
print(onehead);
cout<<"->";
print(twohead);
        if(tailzero->data != -1 && tailone->data != -1 && tailtwo->data != -1 ){
            tailzero->next=onehead->next;
            head=Zerohead->next;
            onehead->next=NULL;
            tailone->next=twohead->next;
            twohead->next=NULL;
            delete twohead;
            delete onehead;
            delete Zerohead;
        }
        else   { 
            if(tailzero->data == -1){
                tailone->next=twohead->next;
                return onehead->next;
            }
            else if(tailone->data == -1){
                tailzero->next=twohead->next;
                return Zerohead->next;
            }
            else if(tailtwo->data == -1){
                tailone->next=onehead->next;
                return Zerohead->next;
            }
        }
       return head;
    }

int main (){
    Node* node1 = new Node(2);
    Node* head=node1;
    insertathead( head, 2);
    insertathead( head, 0);
    insertathead( head, 2);
    insertathead( head, 1);
    insertathead( head, 2);
    insertathead( head, 2);
    insertathead( head, 1);
    print(head);
    //insertathead( head, 0);
    //insertathead( head, 1);
    //insertathead( head, 2);
    //insertathead( head, 1);
    //insertathead( head, 0);
    //insertathead( head, 1);
    //insertathead( head, 1);
    //insertathead( head, 1);
    //insertathead( head, 2);
    Node* temp=segregate( head);
    print(temp);
    return 0;
}
//2 1 1 1 0 1 2 0 1 0 1 0 1 2 0 0 1 
//1 2 2 1 2 0 2 2//