#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int i=0;
 int arr[32];
 while(n){
    int rem=n%8;
    arr[i]=rem;
     i++;
    n=n/8;
   
 }
 for(int j=i-1;j>=0;j--){
    cout<<arr[j];
 }
}