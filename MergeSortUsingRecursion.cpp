# include<iostream>
# include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int s, int e){
     int mid=s+(e-s)/2;
     int len1=mid-s+1;
     int len2=e-mid;
     int *first=new int[len1];
     int *second=new int[len2];
     int mainArrayIndex=s;
     for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];
     }
      mainArrayIndex =mid+1;
     for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayIndex++];
     }
     int i=0;
     int j=0;
     mainArrayIndex=s;
     while(i<len1 && j<len2){
        if(first[i]<second[j]){
            arr[mainArrayIndex++]=first[i++];
        }
        else{
            arr[mainArrayIndex++]=second[j++];
        }
     }
     while(i<len1){
        arr[mainArrayIndex++]=first[i++];
     }
     while(j<len2){
        arr[mainArrayIndex++]=second[j++];
     }
     delete [] first;
     delete [] second;

}
void mergeSort(int arr[],int s,int e){
    if(s>=e)
    return;
    int mid=s+(e-s)/2;
    //left part ke liye
    mergeSort(arr,s,mid);
    //right part ke liye 
    mergeSort(arr,mid+1,e);
    //for merge both array
    merge(arr,s,e);
}
int main() {
   int arr[5]={2,6,1,1,9};
   int n=5;
   mergeSort(arr,0,n-1);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}