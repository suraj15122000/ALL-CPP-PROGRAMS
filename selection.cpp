#include<iostream>
using namespace std;
void Selection(int arr[],int n){
      for(int i=0;i<n-1;i++){
        int miniindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[miniindex]>arr[j]){
                miniindex=j;
            }
        }
        swap(arr[miniindex],arr[i]);
      }
}
int main(){
    int arr[5]={2,5,3,9,4};
    Selection(arr,5);
   for(int i=0;i<5;i++){
    cout<<arr[i];
   }
}
