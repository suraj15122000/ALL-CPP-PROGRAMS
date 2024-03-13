# include<iostream>
using namespace std;
string conver(string s){
    string s2="";
    for(int i=0;i<s.size();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9') || (s[i]>='A' && s[i]<='Z')){
           s2.push_back(s[i]);
        }
    }
        return s2;
}
int main(){
    string s="sur5AB6aj@ k";
    conver(s);

}
