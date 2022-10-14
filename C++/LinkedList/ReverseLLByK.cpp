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
void insertathead(Node* &head, int n){
  Node* temp= new Node(n);
  temp -> next = head;
  head = temp;
}
void print(Node* &head){
 
     Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp ->next;
    }
    cout << endl;
}

Node* reverseInK(Node* &head, int k) {
    //empty list
    if(head == NULL)
    return NULL;

    Node* curr = head;
    Node* next = curr -> next;
    Node* prev = NULL;
    int count = 0;

    //Step 1: reverse first k nodes
    while(curr != NULL && count < k) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next; 
        count++;
    } 
    if(next != NULL){
        Node* rem = reverseInK(next, k);
        head -> next = rem;
    }
    return prev;
}

int main (){
    Node* node1 = new Node(5);
    Node* head=node1;
    insertathead( head, 1);
    insertathead( head, 2);
    insertathead( head, 3);
    insertathead( head, 4);
    insertathead( head, 5);
    insertathead( head, 6);
    insertathead( head, 7);
    insertathead( head, 8);
    print (head);
    int k=3;
    Node* ans=reverseInK(head, k);
    print (ans);
    return 0;
} 