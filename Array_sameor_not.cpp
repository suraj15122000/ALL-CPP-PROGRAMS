# include<iostream>
# include<bits/stdc++.h>
using namespace std;
bool sameornot(int arr1[],int arr2[],int p, int q){
    sort(arr1,arr1+p);
    sort(arr2,arr2+q);
    for(int i=0;i<p;i++){
        if(arr1[i]!=arr2[i]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int arr1[4]={3,6,4,8};
    int arr2[4]={6,3,8,4};
   
    if(sameornot(arr1,arr2,4,4)==0){
        cout<<"Array is not same."<<endl;
    }
    else{
         cout<<"Array is same."<<endl;
    }


}