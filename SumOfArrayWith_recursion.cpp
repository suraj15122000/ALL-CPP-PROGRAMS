# include<iostream>
using namespace std;
int GetSum(int arr[] ,int n){
    if(n==0)
    return 0;

    if(n==1)
    return arr[0];

    int Remainingpart=GetSum(arr+1,n-1);
    int sum=arr[0]+Remainingpart;
    return sum;
}
int main(){
    int arr[5]={1,2,5,6,7};
    int size=5;
    
    int ans=GetSum(arr,size);
    cout<<"Sum of Array is "<<ans;
}