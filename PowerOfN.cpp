# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main() {
   int n=2;
   int po=3;
   int ans=1;
   for(int i=1;i<=po;i++){
    ans=ans*n;
   }
   cout<<ans;
}