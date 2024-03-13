# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  int temp=n;
  int ans=0;
  while(n){
    int rem=n%10;
    ans=ans*10+rem;
    n/=10;
  }
  if(temp==ans)
  cout<<"yes "<<temp<<" is pallindrome";
  else
  cout<<"not a pallindrome no.";
  return 0;
}