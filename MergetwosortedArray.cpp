#include<iostream>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    while(j<m){
        arr3[k++]=arr2[j++];
    }
}
void print(int ans[],int s){
    for(int i=0;i<s;i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int arr1[7]={1,2,4,46,4,54,43};
    int arr2[3]={2,3,6};
    int arr3[20]={};
   merge(arr1,7,arr2,3,arr3);
    print(arr3,10);
    return 0;
}