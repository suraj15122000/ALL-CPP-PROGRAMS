# include<iostream>
# include<bits/stdc++.h>
using namespace std;
bool pallindrome(int n){
    int temp=n;
    int ans=0;
    while(n>0){
        int rem=n%10;
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
int LongestPallindrome(int arr[], int n){
    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--){
        if(pallindrome(arr[i])){
            return arr[i];
            break;
        }
    }
}

int main(){
    int arr[5]={12321,454,789,24631,151};
    int ans=LongestPallindrome(arr,5);
    cout<<ans;

}