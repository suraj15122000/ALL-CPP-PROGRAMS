#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
        int digit =n&1;
        if(digit==1){
            cout<<"Number is odd"<<endl;
        }
        else{
            cout<<"number is even";
        }
    
}