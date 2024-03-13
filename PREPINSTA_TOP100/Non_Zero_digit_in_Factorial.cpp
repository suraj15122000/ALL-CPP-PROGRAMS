#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==1)
    return 1;
    return n*fact(n-1);
}
int main()
{
 int n;
 cout<<"Enter a number: "<<endl;
 cin>>n;
 int cnt=0;
 int factorial=fact(n);
  while(factorial>0){
    int rem=factorial%10;
   // cout<<rem<<endl;
    if(rem!=0){
        cnt++;
    }
    factorial/=10;
  }
  cout<<cnt;

}