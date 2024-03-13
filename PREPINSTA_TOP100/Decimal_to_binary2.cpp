#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no in Decimal: "<<endl;
    cin>>n;
    int arr[32];
    int pos=0;
    while(n){
        int rem=n%2;
       // cout<<rem<<" ";
        arr[pos]=rem ;
        n=n/2;
        pos++;

    }
    for(int i=pos-1;i>=0;i--){
        cout<<arr[i];
    }
}