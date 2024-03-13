# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}
int main() {
  int n;
  cin>>n;
  int temp=n;
  int sum=0;
  while(n){
    int digit=n%10;
    sum=sum+fact(digit);
    n=n/10;
  }
  if(temp==sum){
    cout<<temp<<" is strong no. ";
  }
  else{
    cout<<temp<<" is not strong no. ";
  }
  return 0;
}