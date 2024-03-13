# include<iostream>
using namespace std;
void leader(int arr[], int n){
    int num=arr[n-1];
    cout<<num<<" ";
    for(int i=n-2;i>=0;i--){
        if(num<arr[i]){
            num=arr[i];
            cout<<num<<" ";
        }
    }
}
int main(){
    int arr[6]={16, 17, 4, 3, 5, 2};
    leader(arr,6);
}