# include<iostream>
using namespace std;
int Sumarray(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans+arr[i];
    }
    return ans;
}
int main(){
    int arr[5]={3,5,12,7,3};
    int ans=Sumarray(arr,5);
    cout<<ans;
}