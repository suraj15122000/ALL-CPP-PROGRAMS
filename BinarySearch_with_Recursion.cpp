# include<iostream>
using namespace std;
bool BinarySearch(int arr[], int n, int k, int s, int e){
    if(s>e){
        return false;
    }
    int mid=s+ (e-s)/2;
    if(arr[mid]==k){
        return true;
    }
    if(k>mid){
        return BinarySearch(arr,n,k,mid+1,e);
    }
    else{
        return BinarySearch(arr,n,k,s,mid-1);
    }
}
int main(){
    int arr[5]={1,2,5,6,7};
    int size=5;
    int key=10;
    bool ans=BinarySearch(arr,size,key,0,4);
   if(ans){
    cout<<"present"<<endl;
   }
   else{
    cout<<"Absent"<<endl;
   }
}