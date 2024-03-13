#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool primeOrNot(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
  int n;
  cin>>n;
  bool flag=false;
  for(int i=2;i<=n/2;i++){
    if(primeOrNot(i)){
        if(primeOrNot(n-i)){
            cout<<n<<" = "<<i<<"+"<<n-i<<endl;
            flag=true;
        }
    }
  }
  if(!flag)
  cout<<"not found any no ";
  

}