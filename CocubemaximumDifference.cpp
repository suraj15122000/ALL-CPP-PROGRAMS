# include<iostream>
using namespace std;
int Maxdiff(int arr[], int n){
    int num=arr[1]-arr[0];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(num<arr[j]-arr[i]){
                num=arr[j]-arr[i];
            }
        }
    }
    return num;
}
int main(){
    int arr[7]={2, 3, 10, 6, 4, 8, 1};
   int num= Maxdiff(arr,7);
   cout<<num;
}