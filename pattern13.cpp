#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no lines in pattern "<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++){

        for(int j=1;j<=n;j++){
            int value=j;
            char ch='A'+value-1;
            cout<<ch;
            value+=1;
        }
        cout<<endl;
    }
}