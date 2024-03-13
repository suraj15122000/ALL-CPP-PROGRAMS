#include<iostream>
using namespace std;
bool search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[5]={2,7,5,9,1};
    int key;
    cout<<"Enter the key. "<<endl;
    cin>>key;
    bool found=search(arr,5,key);
    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
       cout<<"Key is not present"<<endl;
    }
}