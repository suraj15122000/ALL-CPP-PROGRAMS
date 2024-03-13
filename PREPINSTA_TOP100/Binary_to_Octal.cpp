#include<iostream>
# include<bits\stdc++.h>
using namespace std;
void convert(int n){
          vector<int>v(32);
   
    int cnt=1, ans=0, i=0;
    int pos=0;
    while(n){
        int rem=n%10;
        ans=ans+pow(2,i)*rem;
        i++;
        v[pos]=ans;
        n=n/10;
        
        if(cnt%3==0){
            ans=0;
            pos++;
            i=0;
        }
        cnt++;
    }

    for(int j=pos;j>=1;j--){
        cout<<v[j];
    }
    
    
}
int main()
{
   int n;
   cout<<"Enter no in binary: "<<endl;
   cin>>n;
   vector<int>ans;
   convert(n);
//    for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<<" ";
//    }


}