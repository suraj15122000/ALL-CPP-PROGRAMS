# include<iostream>
// # include<bits/stdc++.h>
using namespace std;
class Stack{

  public:
  int *arr;
  int size;
  int top;

  Stack(int size){
    this->size=size;
    arr=new int[size];
    top=-1;
  }
  void push(int element){
      if(size-top>1){
        top++;
        arr[top]=element;
      }
      else{
        cout<<"stack overflow"<<endl;
      }
  }
  void pop(){
    if(top>=0){
        top--;
    }
    else{
        cout<<"stack underflow"<<endl;
    }
  }
  int peek(){
    if(top>=0){
        return arr[top];
    }
    else{
        cout<<"stackk is empty"<<endl;
        return -1;
    }
  }
  bool isEmpty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
  }
 
};

int main() {
    Stack st(30);
    st.push(45);
    st.push(47);
    st.push(83);
   bool ans= st.isEmpty();
   cout<<ans;
   

    return 0;
        
}