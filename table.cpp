# include<iostream>
using namespace std;
int main(){
    int n;
    int a;
    cin>>n;
    int ans=0;
    for(int i=1;i<=10;i++){
         a=n*i;
        cout<<a<<" ";
        ans=ans+a;
    }
    cout<<endl;
    cout<<ans;
}