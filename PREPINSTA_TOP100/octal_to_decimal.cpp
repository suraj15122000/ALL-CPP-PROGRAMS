#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter any octal no :"<<endl;
  cin>>n;
  int i=0;
  int ans=0;
  while(n){
    int rem=n%10;
    ans=ans+pow(8,i)*rem;
    n=n/10;
    i++;
  }
  cout<<ans;
}