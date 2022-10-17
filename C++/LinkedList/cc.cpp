 if( head == NULL)
        return NULL;
          Node* slow=head;
            Node* slow1=head;
          Node* fast=head;
        while(slow!=NULL && fast!=NULL){
           fast=fast->next;
           if(fast->next!=NULL)
           fast=fast->next;
           slow=slow->next;
           if(fast==slow) {
               slow1=slow;
            }
        }
            Node*initial=head;
    while(initial!=slow1){
        initial=initial->next;
        slow1=slow1->next;
    }

    Node* temp=initial->next;
    Node* back=initial;
    while(temp!=starting){
    temp=temp->next;
    back=back->next;
    }
    back->next=NULL;