# include<iostream>
//# include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
      void insertAtnode(Node* &head , int data){
        Node* temp=new Node(data);
        temp->next=head;
        head=temp;

}
void print(Node* &head){
    Node* current=head;
    while(current!=NULL){
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
}
void insertAtposition(Node* head,int position,int data){
    Node* temp=head;
     int cnt=1;
     while(cnt<position-1){
        temp=temp->next;
        cnt++;
     }
     Node* nodeToinsert=new Node(data);
     nodeToinsert->next=temp->next;
     temp->next=nodeToinsert;
}
void insertAttail(Node* &tail, int data){
    Node* temp= new Node(data);
    tail->next=temp;
    tail=tail->next;
}

int main() {
    Node* node1=new Node(89);
    Node* head=node1;
    Node* tail=node1;
    insertAtnode(head,12);
   print(head);
  insertAttail(tail,23);
   insertAttail(tail,26);
   insertAtposition(head,3,25);
  print(head);


   
   return 0;
}