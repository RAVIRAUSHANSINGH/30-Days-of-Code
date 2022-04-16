 Node* insert(Node *head,int data)
      {
          //Complete this method
           if(head == NULL){
              return new Node(data);
          }
          Node *temp=head;
          while(temp->next!=NULL){
              temp=temp->next;
          }
          temp->next=new Node(data);
          return head;
      }
