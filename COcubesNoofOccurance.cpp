# include<iostream>
using namespace std;
void Occurance(string s){
    
    for(int j=0;s[j]!='\0';j++){
        int count=1;
        while(s[j]==s[j+1]){
           ++count;
             j++;
        }
        cout<<s[j]<<count;
    }
}
int main(){
    string s="aaabbbcc";
    Occurance(s);
}