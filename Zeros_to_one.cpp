#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    
        if(n == 0)
          ans=1;

          
    while(n>0){
        int rem =n%10;
        if(rem==0)
            rem=1;
        
         
        n/=10;
        ans=ans*10+rem;
       
    }
    n=0;
    while(ans>0){
        int r=ans%10;
        n=n*10+r;
        ans/=10;
    }
    cout<<"Converted number is "<<n;
}