#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no lines in pattern "<<endl;
    cin>>n;
    int j;
    for(int i=1;i<=n;i++){
        for(j=n-i;j>=1;j--){
            cout<<" ";
        }
        // for star
        for( j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}