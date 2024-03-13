#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool RecursiveBinary(int arr[], int s,int e,int target){
    if(s>e)
     return false;
    

    int mid=s+((e-s)/2);
    if(target==arr[mid])
     return true;
    
    else if(target>arr[mid])
     return RecursiveBinary(arr,mid+1,e,target);

    else
    return RecursiveBinary(arr,s,mid-1,target);
    


}
int main()
{
    int arr[100]={1,2,5,7,9,10};
    int n=6;
    int target=9;
    if(RecursiveBinary(arr,0,n-1,target)){
         cout<<"Target is present";
    }
    else{
        cout<<"target is not present";
    }
   
}