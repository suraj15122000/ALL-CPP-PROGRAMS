#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool paldm(int n){
    int pall=n;
    int i=0;
    int ans=0;
    while(n){
        int rem=n%10;
        ans=ans*10+rem;
        i++;
        n=n/10;
    }
    if(ans==pall)
    return true;
    else return false;
}
int main()
{
 int n,m;
 cout<<"Enter first and last no. : "<<endl;
 cin>>n>>m;
 for(int i=n;i<=m;i++){
    if(paldm(i)){
        //cout<<paldm(i)<<" ";
        cout<<i<<" ";
    }
 }

}