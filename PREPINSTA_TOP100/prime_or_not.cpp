# include<iostream>
# include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int cnt=0;
    for(int i=2; i<=sqrt(n);i++){
        if(n%i==0){
            cnt++;
        }
    }
    if(cnt)
    cout<<n<<" is not a prime no.";
    else
    cout<<n<<" is prime no.";

}