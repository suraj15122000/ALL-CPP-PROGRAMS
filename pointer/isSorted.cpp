#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int size){
    if(size==0 || size==1)
    return true;

    if(arr[0]>arr[1])
    return false;
    else{
    bool ans=isSorted(arr+1,size-1);
    return ans;
    }
}
int main(){
    int arr[10]={12,15,16,18,20,22,23,29,44,56};
    int n=10;
    bool b=isSorted(arr,n);
    cout<<b<<endl;
}