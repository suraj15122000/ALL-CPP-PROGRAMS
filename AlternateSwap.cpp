# include<iostream>
using namespace std;
void alternateSwap(int arr[],int n){
    for(int i=0;i<n-1;i+=2){
       
        swap(arr[i],arr[i+1]);
    }
}
int main(){
    int arr[10]={1,3,7,4,3,9,1,3,4,5};
    int arr1[9]={16,8,7,2,0,8,7,5,3};
    alternateSwap(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

    

}