# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin>>n;
   int ans=0;
   while(n){
     int rem=n%10;
     ans=ans * 10 + rem;
     n/=10;
   }
   cout<<"Reverse of a number is "<<ans<<endl;
   return 0;
}