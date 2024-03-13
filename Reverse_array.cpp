# include<iostream>
using namespace std;
void Reverse(int arr[], int n){
    int s=0;
    int e=n-1;
   while(s!=e){
    swap(arr[s],arr[e]);
   }
}
int main(){
    int arr[5]={2,7,4,9,3};
    Reverse(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}