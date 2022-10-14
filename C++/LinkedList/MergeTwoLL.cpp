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

void sortedMerge(Node* head1, Node* head2)  
{  
    if(head1->data <= head2->data){
        merge(head1, head2);
    }
    else merge(head2, head1);
}
void merge(Node* head1, Node* head2){
    Node* ans=NULL;
    Node*one=head1;
    Node*two=head2;
    while(one->next!=NULL || two->next!=NULL){
        if(one->data<two->data){
            ans->data=one->data;
            one=one->next;
            ans=ans->next;
        }
        else if(one->data>two->data){
            ans->data=two->data;
            two=two->next;
            ans=ans->next;
        }
        else if(one->data==two->data){
            ans->data=two->data;
            two=two->next;
            ans=ans->next;
            ans->data=one->data;
            one=one->next;
            ans=ans->next;
        }
    }
    if(one==NULL && two!=NULL){
      while(two!=NULL){
          ans->data=two->data;
            two=two->next;
            ans=ans->next;
      }
    }
    if(two==NULL && one!=NULL){
        while(one!=NULL){
       ans->data=one->data;
            one=one->next;
            ans=ans->next; 
        }
    }
    print(ans);
}
int main (){
    Node* node1 = new Node(40);
    Node* head=node1;
    insertathead( head, 15);
    insertathead( head, 10);
    insertathead( head, 5);
    print (head);
     Node* node22=new Node(20);
     Node*head2=node22;
     insertathead( head2, 3);
     insertathead( head2, 2);
     print (head2);
    sortedMerge(head,head2);
    return 0;
} 