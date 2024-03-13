#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no lines in pattern "<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++){
         int value=n;
        for(int j=1;j<=i;j++){
          
            char ch='A'+value-i;
            cout<<ch;
            value+=1;
        }
        cout<<endl;
    }
}