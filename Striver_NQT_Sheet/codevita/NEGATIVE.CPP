#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[2000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int negative=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            negative=negative+arr[i];
        }
    }
    
 
}