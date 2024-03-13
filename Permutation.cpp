# include<iostream>
using namespace std;
int factorial(int n){
    while(true){
        if(n<=1){
            return 1;
        }
        else{
            return n*factorial(n-1);
        }
    }
}
int main(){
    int n,r;
    cout<<"Enter n or r ";
    cin>>n>>r;
    int num=factorial(n);
    int denu=factorial(n-r);
    int ans=num/denu;
    cout<<endl;
    cout<<"permutation is "<<ans;
    

}