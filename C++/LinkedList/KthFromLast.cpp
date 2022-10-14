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

int getNthFromLast(Node *head, int n)
{

    if(head==NULL) return -1;
    
    int cnt=getNthFromLast(head->next,n)+1;
    if(cnt==n){
    return head->data;
    }
    //cout<<cnt<<" ";
   //return cnt;
}
int main (){
    Node* node1 = new Node(1);
    Node* head=node1;
    insertathead( head, 2);
    insertathead( head, 3);
    insertathead( head, 4);
    insertathead( head, 5);
    insertathead( head, 6);
    insertathead( head, 7);
    insertathead( head, 8);
    insertathead( head, 9);
    print (head);
    int n=4;
    cout<<getNthFromLast(head, n);
    return 0;
} 
