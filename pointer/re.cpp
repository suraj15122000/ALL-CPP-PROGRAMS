#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void count(int n){
    if(n==0){
    cout<<n<<" ";
    return;
    }
     count(n-1);
    cout<<n<<" ";
   
}
// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     return n*fact(n-1);

// }
// int power(int base, int po){
//     if(po==0){
//         return 1;
//     }
//     return base*power(base,po-1);
// }
int main(){
//     cout<<"enter n"<<endl;
//    int n;
//    cin>>n;
//    cout<<fact(n)<<endl;
//    cout<<"enter for power "<<endl;
//    int b,p;
//    cin>>b>>p;
//    cout<<power(b,p)<<endl;

    int nu;
   cin>>nu;
   count(nu);


}



