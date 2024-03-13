#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(int arr[] , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void bubbleSort(int arr[], int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void insertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
      int temp=arr[i];
      int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>arr[j+1]){
             arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int powerOf(int base, int pow){
    if(pow==0){
        return 1;
    }
    
    return (base*powerOf(base,pow-1));
}
int main()
{
//   int arr[5]={35,98,12,45,0};
//   int n=5;
 // bubbleSort(arr,n);
// insertionSort(arr,n);
 // print(arr,n);
//  string str="aaabbbbcccddd";
//  int arr[26]={0};
//  for(int i=0;i<str.size();i++){
//     arr[str[i]-'a']++;
//  }
//  for(int j=0;j<str.size();j++){
//     if( str[j+1]!=str[j]){
//     cout<<str[j]<<arr[str[j]-'a'];
//  }
//  }

 int num=2;
 int pow=10;
 int ans=powerOf(num,pow);
 cout<<ans;

}