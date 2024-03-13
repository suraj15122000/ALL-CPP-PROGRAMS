# include<iostream>

# include<bits/stdc++.h>
using namespace std;
class Hero{
    private:
    int Score=78;
   string name="suraj";
   public:
   string getSyam(){
     return name;
   }
   void setSyam(string sc){
    name=sc;
   }

    int getRam(){
        return Score;
    }
    void setRam(int sc){
        Score=sc;
    }
};

int main() {
   Hero h1;
   h1.setRam(90);
h1.setSyam("rahul");
  cout<<"score is "<<h1.getRam()<<endl;
 cout<<"name is "<<h1.getSyam()<<endl;
   return 0;
}