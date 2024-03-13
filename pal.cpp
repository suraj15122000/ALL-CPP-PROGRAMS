# include<iostream>
using namespace std;
bool palli(int n){
    int temp=n;
    int ans=0;
    while(n>0){
        int rem =n%10;
        ans=ans*10+rem;
        n/=10;
    }
    if(temp==ans){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    int m;
    cin>>n>>m;
    for(int i=n;i<=m;i++){
        if(palli(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}