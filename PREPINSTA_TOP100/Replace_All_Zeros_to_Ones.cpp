#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int i=0;
  int ans=0;
  while(n){
    int rem=n%10;
    if(rem==0)
    rem=1;
    ans=ans+pow(10,i)*rem;
    i++;
    n=n/10;

  }
  cout<<" ans is "<<ans;
}