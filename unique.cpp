# include<iostream>
using namespace std;
void unique(int arr[],int n){
    int count=0;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<=n;j++){
                if(i!=j){
                    if(arr[i]==arr[j]){
                        count++;
                    }
                }
            }
            if(count==0){
                cout<<arr[i]<<" ";
            }
        }
}
int main(){
    int arr[5]={1,1,2,7,7};
    unique(arr,5);
}