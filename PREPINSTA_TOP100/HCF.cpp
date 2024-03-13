# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int HCF(int a ,int b, int mini){
    while(1){
        if(a%mini==0 && b%mini==0){
            return mini;
        }
        mini--;
    }
}
int main() {
  int n,m;
  cin>>n>>m;
  int mini=(n<m) ? n:m;
  int ans=HCF(n,m,mini);
  cout<<"HCF of "<<n<<" and "<<m<<" is "<<ans<<endl;
}
