# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin>>n;
   int temp=n;
   int ans=0;
   while(n){
     int rem=n%10;
     ans=ans+rem;
     n/=10;

   }
   cout<<"sum of digit of "<<temp<<" is "<<ans;
   return 0;
}