#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void SecondElement(int arr[],int n){
    
    sort(arr,arr + n);

    int ans1=arr[1];
    int ans2=arr[n-2];
    int sum =ans1+ans2;
    cout<<sum;

    // int ans1=0;
    // int ans2=-1;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>ans1){
    //         ans1=arr[i];
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     if(arr[i]>ans2 && arr[i]<ans1){
    //         ans2=arr[i];
    //     }
    // }
    // return ans2;
}
using namespace std;
int main(){
    int arr[6]={3, 2, 1, 7, 5, 4};
    SecondElement(arr,6);
    //sort(arr,arr+5);
//    // for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
}
