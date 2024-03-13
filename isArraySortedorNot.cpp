# include<iostream>
# include<bits/stdc++.h>
using namespace std;
bool Linear(int arr[], int n, int k){
    cout<<arr[n-1]<<endl;
    if(n==0)
    return false;
    if(arr[0]==k){
        return true;
    }
    else{
         bool ans=Linear(arr+1,n-1,k);
         return ans;
    }
   

      
}
int main() {

    int arr[6]={1,3,19,3,7,8};
    int k=8;
    bool ans=Linear(arr,6,k);
   cout<<ans;
}