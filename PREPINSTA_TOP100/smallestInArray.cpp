#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int smallest(int arr[],int n){
    if(n==1){
        return arr[0];
    }
    return min(arr[n-1],smallest(arr,n-1));
}
int main()
{
  int arr[]={3,56,32,1,87,9};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<n<<endl;
  int ans=smallest(arr,n);
  cout<<ans;

} 