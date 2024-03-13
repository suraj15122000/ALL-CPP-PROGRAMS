#include<iostream>
using namespace std;
int binary(int arr[], int n, int key) {
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;
  while(s<=e){
      if(key==arr[mid]){
          return mid;
      }
      else if(key>arr[mid]){
          s=mid+1;
      }
      else{
          e=mid-1;
      }
       mid = s + (e - s) / 2;
  }
  return -1;
}
int main(){
  
   int n;
   cin>>n;
//    cout<<n;
    int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }

   int k;
   cin>>k;
   int ans=binary(arr,n,k);
   cout<<ans;
   return 0;

}