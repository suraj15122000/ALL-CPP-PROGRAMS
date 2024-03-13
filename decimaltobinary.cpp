#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"ENter any no.";
    cin>>n;
    int i=0;
   int ans=0;
    while(n!=0){
        int bit =n & 1;
        ans=(bit * pow(10,i)) + ans;
        cout<<ans<<" ";
        n=n>>1;
        i++;
    }
    cout<<ans;
}