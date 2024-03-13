#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no lines in pattern "<<endl;
    cin>>n;
     
    for(int i=1;i<=n;i++){
      
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
             int value=j;
            cout<<value;
            value+=1;
        }
          for(int k=i-1;k>=n;k--){
            int val=k;
            cout<<val;
            k+=1;
          } 
          cout<<endl;
    }
}