# include<iostream>
using namespace std;
void hyp(string s , int n){
    string s1="";
    for(int i=0;i<n;i++){
        if(s[i]!='-'){
            s1.push_back(s[i]);
        }
    }
    cout<<s1;
}
int main(){
    string s;
    cin>>s;
    int n=s.size();
    hyp(s, n);
        return 0;
}