# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class node{
public:
   int data;
   node* left;
   node* right;

   node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
   }
};
node* createTree(node* root){
  cout<<"Enter the data: "<<endl;
  int data;
  cin>>data;
  root=new node(data);
  if(data==-1)
  return NULL;
  //for left
  cout<<"Enter the data for left node "<<data<<endl;
  root->left=createTree(root->left);
  cout<<"Enter the data for right node "<<data<<endl;
  root->right=createTree(root->right);
  return root;

}
void levelOrderTraversal(node* root){
  queue<node*>q;
  stack<int>s;
  q.push(root);
 
  while(!q.empty()){
    node* temp=q.front();
   s.push(temp->data);
    q.pop();
   
     if(temp->left){
      q.push(temp->left);
    }
    if(temp->right){
      q.push(temp->right);
    }
    
  }
  while(!s.empty()){
    int ans=s.top();
    cout<<ans<<" ";
    s.pop();
  }

}
int main() {
         node* root=NULL;
        root= createTree(root); 
        cout<<"printing levelOrderTravelsal elements: "<<endl;
        levelOrderTraversal(root);
}