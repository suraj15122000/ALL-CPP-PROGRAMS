# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n==0){
        return 0;
    }
    int a=0,b=1,c;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}
int main() {
       int n;
       cin>>n;
       int ans=fib(n);
       cout<<"fibonacci is "<<ans;
}