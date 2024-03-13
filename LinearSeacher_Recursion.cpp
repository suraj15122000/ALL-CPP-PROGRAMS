# include<iostream>
using namespace std;
bool Linear(int arr[] ,int n, int key){
   if(n==0){
    return false;
   }
   if(arr[0]==key){
    return true;
   }
  else{
     bool sum= Linear(arr+1,n-1,key);
     return sum;
  }
 
}
int main(){
    int arr[5]={1,2,5,6,7};
    int size=5;
    int key= 45;
    
   if( Linear(arr,size, key))
    cout<<"Element is present";
    else 
     cout<<"Element is not present";
}