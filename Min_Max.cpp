
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int Maxelement(int arr[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    return maxi;
}
int Minelement(int arr[],int n){
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    return mini;
}
int main(){
    int arr[5]={3,6,2,4,9};
    int ans=Minelement(arr,5);
     int ans2=Maxelement(arr,5);
    cout<<ans;
    cout<<endl;
    cout<<ans2;
    
}