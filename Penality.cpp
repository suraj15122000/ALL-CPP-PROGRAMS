# include<iostream>
using namespace std;
int penalty(int arr[], int n ){
    int ans=0;
    for(int i=0;i<n-1;i++){
        ans=ans + (arr[i+1]-arr[i]);  
    }
    return ans;
}
int main(){
    int arr[4]={-2,1,4,6};
    int ans=penalty(arr,4);
    cout<<ans;

}