# include<iostream>
# include<bits/stdc++.h>
using namespace std;
 class Node{
    public : 
    int data;
    Node * next; 
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
   };
   void insertAtNode(Node* &head, int d){
                //New node created
                Node * temp1=new Node(d);
                temp1->next=head;
                head=temp1;
   }
   void insertAttail(Node* &tail,int d){
         Node* newtemp=new Node(d);
         tail->next=newtemp;
         tail=newtemp;

   }
    void insertAtposition(Node* &head,int position ,int d){
      if(position==1){
        insertAtNode(head,d);
        return;
      }
      
        Node* temp= head;
       int count=1;
       while(count<position-1){
        temp=temp->next;
        count++;
       }
       Node* insertTonode=new Node(d);
       insertTonode->next=temp->next;
       temp->next=insertTonode;
    }
   void print(Node* &head){
     Node * t=head;
     while(t!=NULL){
        cout<<t->data<<" ";
        t=t->next;
     }
     cout<<endl;
   }
int main() {
  Node* N1=new Node(12);
 // cout<<N1->data<<endl;
  //cout<<N1->next;
  Node * head=N1;
  Node* tail=N1;
  print(head);
  insertAttail(tail,18);
  print(head);
insertAttail(tail,17);
  insertAttail(tail,109);
  print(head);
  insertAtposition(head,3,99);
  print(head);
  insertAtposition(head,1,100);
  print(head);
  


}