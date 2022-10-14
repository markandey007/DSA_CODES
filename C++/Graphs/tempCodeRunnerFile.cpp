#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
Node(int data){
    this->data=data;
    this->next=NULL;
}
~Node(){
    if(this->next!=NULL){
        delete next;
    }
    next=NULL;
}
};
void insertNode(Node* &tail, int element, int d){
    if(tail==NULL){
        Node* newNode = new Node(d);
        tail=newNode;
        //circular banao 
        newNode->next=newNode;
    }
    else{
        //non empty list
        Node* curr =tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void print(Node* &tail){
    Node* temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail!=temp);
    cout<<endl;

}
int main() {
    Node* tail=NULL;
insertNode(tail,2,12);
print(tail);

insertNode(tail,12,15);
print(tail);

insertNode(tail,15,67);
print(tail);

insertNode(tail,12,899);
print(tail);
    return 0;
}

