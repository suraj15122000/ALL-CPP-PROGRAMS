#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findpow(int n,int pow){
    if(pow==0){
        return 1;
    }
    else{
        return n*findpow(n,pow-1);
    }
}
int main()
{
   int no,pow;
   cin>>no>>pow;
   cout<<no<<"^"<<pow<<" is "<<findpow(no,pow);
}