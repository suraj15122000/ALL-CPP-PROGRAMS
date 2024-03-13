# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int SecondHighest(int arr[],int n){
    sort(arr,arr+n);
    
    return arr[1];
}
int main(){
    int arr[5]={4,6,8,1,2};
    int ans=SecondHighest(arr,5);
    cout<<ans;
}