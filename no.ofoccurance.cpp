#include<iostream>
using namespace std;
int occurance(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int count=0;
    while(s<=e){
        if(key ==arr[s]){
            count++;
        }
        s+=1;
    }
    return count;
}
int main(){
    int arr[6]={2,1,1,5,1,1};
    int ar[3]={3,8,9};
    cout<<"No. of occurance is  "<<occurance(arr,6,1)<<endl;
    //   cout<<"index is "<<binary(ar,3,9)<<endl;
}