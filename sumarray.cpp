#include<iostream>
using namespace std;
int sum(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans+arr[i];
    }
    return ans;
}
int main(){
    int arr[100],n;
    cout<<"Enter the size of array";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=sum(arr,n);
    cout<<ans;

}