#include<iostream>
using namespace std;
void removing(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}
void print(int arr[],int s){
    for(int k=0;k<s;k++){
        cout<<arr[k]<<" ";
    }
}
main(){
    int arr[5]={34,0,87,0,78};
    removing(arr,5);
    print(arr,5);
}