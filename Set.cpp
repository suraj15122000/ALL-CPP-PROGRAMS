# include<iostream>
# include<bits/stdc++.h>
using namespace std;
set<int> sorting(int arr[], int n){
   set<int> s;
   for(int i=0;i<n;i++){
    s.insert(arr[i]);
   }
   return s;
}
int main(){
    int arr[5]={2,4,2,2,1};
    set<int>my_set= sorting(arr,5);
    for(int i:my_set){
    cout<<i;
   }
    return 0;

}