# include<iostream>
using namespace std;
int Lsp(string s){
    int n = s.size();
    int i=1;
    int len=0;
    while(i<n){
        if(s[i]==s[len]){
            i++;
            len++;
        }
        else{
            i=i-len+1;
            len=0;
        }
    }
    return len>n/2 ? len/2 : len;
}
int main(){
    string s="blablabla";
    int ans=Lsp(s);
    cout<<ans;
}