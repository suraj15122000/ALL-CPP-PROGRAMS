# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    cout<<"sum of "<<n<<" natural number is "<<sum;
    return 0;

}