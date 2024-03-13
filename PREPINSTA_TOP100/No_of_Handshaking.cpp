#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int people;
 cin>>people;
 int ans=((people-1) * people)/2;
 cout<<"Handshacking is "<<ans;
 /* 
 int n=people;
 int ans=0;
 for(int i=1;i<n;i++){
    ans=ans+n-i;
 }
 cout<<"Handshaking is "<<ans;
 */
}