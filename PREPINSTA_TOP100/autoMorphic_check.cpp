# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  bool cnt=true;
  int squre=n*n;
  while(n>0){
    if(n%10!=squre%10){
      cnt=false;
    }
    n/=10;
    squre/=10;
  }
  if(cnt){
    cout<<"no is automorphic "<<endl;
  }
  else{
    cout<<"no is not automorphic"<<endl;
  }
}