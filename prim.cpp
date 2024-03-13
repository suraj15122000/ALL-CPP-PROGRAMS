#include<iostream>
using namespace std;
bool prime(int n){
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            return 0;
        }
        
    }
    return 1;
}
int main(){
    int n;
    cout<<"Enter any no.";
    cin>>n;
    bool ans =prime(n);
    if(ans==0){
        cout<<" not prime";
    }
    else{
        cout<<"prime";
    }

}