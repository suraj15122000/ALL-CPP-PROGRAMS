# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main() {
 int n;
 cin>>n;
 int ans=0;
 int i=0;
 while(n){
    int rem=n%10;
    ans=ans+(pow(8,i)*rem);
    n=n/10;
    i++;
 }
 cout<<" no in decimal is "<<ans;

}