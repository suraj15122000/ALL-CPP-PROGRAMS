#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter any decimal no. :"<<endl;
  cin>>n;
  char arr[1000];
  int pos=0;
  while(n){

   int rem=n%16;
    if(rem<10){
        arr[pos]=rem+48;
        pos++;
    }
    else{
        arr[pos]=rem+55;
        pos++;
    }
    n=n/16;
  }
  for(int j=pos-1;j>=0;j--){
    cout<<arr[j];
  }
}