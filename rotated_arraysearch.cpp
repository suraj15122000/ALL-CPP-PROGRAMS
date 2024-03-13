#include<iostream>
using namespace std;
int search(int arr[],int l,int h,int key){
    if(l>h){
        return -1;
    }
    int mid=(l+h)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]>=arr[l]){
        if(key>=arr[l] && key<=arr[mid])
            return search(arr,1,mid-1,key);
           
        
        
             return search(arr,mid+1,h,key);
        
    }
    if(key>=arr[mid] && key<=arr[h])
        return search(arr,mid+1,h,key);
    

         return search(arr,1,mid-1,key);
    
     
}
int main(){
    int arr[6]={1,2,5,3,4,9};
    // int ar[3]={3,8,9};
    int i=search(arr,0,6,4);
    if(i!=-1){
       cout<<"no. is present at index "<<i;
    }
    else{
        cout<<"not found";
    }
    
    //   cout<<"index is "<<binary(ar,3,9)<<endl;
}