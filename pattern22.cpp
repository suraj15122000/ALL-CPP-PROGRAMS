#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no lines in pattern "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        int value=i;
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++){
            cout<<value;
            value+=1;
        }
        cout<<endl;
    }
}