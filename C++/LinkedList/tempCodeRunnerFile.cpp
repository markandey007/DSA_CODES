#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

Node(int data){
    this->data=data;
    this->prev=NULL;
    this->next=NULL;
}
};
void insertathead(Node* &head, int d){
    Node* temp= new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertattail(Node* &tail,int d){
    Node* temp= new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void print(Node* &head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int getlength(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }

    return len;

}
void insertatmiddle(Node* &head,Node* &tail, int position, int d){
    if(position==1){
        insertathead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertattail(tail,d);
        return;
    }
    //creating a node for d
    Node* nodetoinsert = new Node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
}
int main() {
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
insertathead(head,12);
print(head);
insertattail(tail,13);
print(head);
//cout<<getlength(head);
insertatmiddle(head,tail,3,22);
print(head);

    return 0;
}