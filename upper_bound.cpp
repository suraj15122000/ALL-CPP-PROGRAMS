#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int upperBound(int arr[], int s,int e,int target){
    // int ans=e+1;
    // while(s<=e){
    //     int mid=s+(e-s)/2;
    //     if(target<arr[mid]){
    //         ans=mid;
    //         e=mid-1;
    //     }
    //     else{
    //         s=mid+1;
    //     }
    //     mid=s+(e-s)/2;
    // }
    // return ans;
    int ans=upper_bound(arr,arr+e,target)-arr;
    return ans;
}
int main()
{
   int arr[100]={1 ,2 ,2, 3, 3, 5};
   int ans=upperBound(arr,0,6,3);
   cout<<ans;
}