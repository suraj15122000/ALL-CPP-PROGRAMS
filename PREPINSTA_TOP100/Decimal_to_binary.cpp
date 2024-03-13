# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  int ans=0;
  int i=1;
  while(n!=0){
    int rem=n % 2;
    ans=(rem * i)+ans;
    i=i*10;
    n=n/2;
  }
  cout<<"value of no in binary is "<<ans;
}