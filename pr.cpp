#include<iostream>
using namespace std;
bool prime(int n){
    for(int i=2;i<n-1;i++){
        if(n%i==0){
          return 0;
        }
    }
   return 1;
}
int main(){
    int n;
    cout<<"Enter any no."<<endl;
    cin>>n;
   bool b= prime(n);
   cout<<b;
    return 0;
}