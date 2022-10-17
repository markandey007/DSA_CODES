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

void deleteEven(Node* &head){
    Node* curr=head;
    while((curr->data)%2!=0){       //jbtk pehla even ni milta aage jao
        curr=curr->next;
        cout<<curr->data<<" ";
    }
    cout<<endl;
    Node*ans=curr;      //return krne ke liye node store ans me
    Node* prev=NULL;            //prev banaya
    while(curr!=NULL){
        if((curr->data)%2==0){      //EVEN
            prev=curr;                     //prev ko curr kdiya
            curr=curr->next;                //current ko aage
        }
        else if((curr->data)%2!=0){  //ODD
            prev->next=curr->next;      //PREV KA NEXT CURR KE AAGE POINT
            curr=curr->next;            //CURRENT KO AAGE
        }

    }

       cout<<"ANs->";
       print(ans);
    
 }
int main (){
    int m=1, n=2;
    Node* node1 = new Node(8);
    Node* head=node1;
    insertathead( head, 7);
    insertathead( head, 6);
    insertathead( head, 5);
    insertathead( head, 4);
    insertathead( head, 3);
    insertathead( head, 2);
    insertathead( head, 1);
       insertathead( head, 7);
          insertathead( head, 5);
    print (head);
    deleteEven(head);
    //print (head);

    
    
    return 0;
} 