# include<iostream>
#include <limits.h>
using namespace std;
int main(){
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
      cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   
    cout<<endl;
    for(int i=0;i<3;i++){
         int ans=0;
        for(int j=0;j<4;j++){
           ans=ans+arr[i][j];
        }
        cout<<ans<<" ";
          cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<4;i++){
         int ans=0;
        for(int j=0;j<3;j++){
           ans=ans+arr[j][i];
        }
        cout<<ans<<" ";
    }
    int num=-1;
    int maxi=INT_MIN;
     for(int i=0;i<3;i++){
         int ans=0;
        for(int j=0;j<4;j++){
           ans=ans+arr[i][j];
        }
        
        if(ans>maxi){
            maxi=ans;
            num=i;
        }
        
          cout<<endl;

    }
    cout<<maxi;
    cout<<endl;
     cout<<"At index "<<num;
    
}