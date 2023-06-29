//classes and object
#include<bits/stdc++.h>
using namespace std;
class student{
    string passcode;
    public:
    string name;
    int id;
    void into(){
cout<<"Myname is "<<name<<",my id is "<<id<<" pass code is ="<<passcode<<endl;
    }

void setPass(string s){
  passcode=s;
  }
};
int main(){
    student s1;
    s1.name="Aman";
    s1.id=1;
    s1.setPass("001");
    s1.into();
    return 0;
}