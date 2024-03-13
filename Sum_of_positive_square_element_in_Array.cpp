# include<iostream>
using namespace std;
bool SquareCheck(int n){
    for(int i=1;i<=n;i++){
        if(i*i==n){
            return 1;
        }
    }
    return 0;
}
int sumOfarray(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        if(SquareCheck(arr[i])){
            ans=ans+arr[i];
        }
    }
    return ans;
}
int main(){
    int arr[6]={1, 2, 3, 4, 5, 16};
    int sum=sumOfarray(arr,6);
    cout<<sum;

   

}