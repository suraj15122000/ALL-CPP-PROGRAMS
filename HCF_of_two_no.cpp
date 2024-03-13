# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int getHCF(int a, int b,int mini){
     if(b%a==0)
     return a;
     for(int i=mini;i>=1;i--){
        if(a%i==0 && b%i==0){
            return i;
        }
     }
}
int main() {
   int n,m;
   cin>>n>>m;
   int mini=(n<m) ? n:m;
   int ans=getHCF(n,m,mini);
   cout<<"HCF of two no. is "<<ans;
   return 0;
}