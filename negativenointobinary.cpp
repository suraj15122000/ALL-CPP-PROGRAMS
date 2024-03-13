#include<iostream>
#include<math.h>
using namespace std;
int binarytodecimal(int n){
    int ans=0,i=0;
    while(n!=0){
        int digit= n & 1;
        ans=(digit * pow(10,i)) + ans;
        n = n>>1;
        i++;
    }
    return ans;
}
int main(){
    int n;
    cout<<"ENter any no.";
    cin>>n;
    int newans;
    if(n<0){
        n=n*(-1);
        newans=binarytodecimal(n);
        int ans2=(~newans);
        ans2+=1;
        cout<<ans2;
        
    }
    else{
        int ans3=binarytodecimal(n);
        cout<<ans3;
    }
  
}