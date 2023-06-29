//classes and object
//parameterised constructor
#include<bits/stdc++.h>
using namespace std;
class student{
    string passcode;
    public:
    string name;
    int id;
    //default constructor
    student(){

    }
    //parameterised constructor
    student(string passcode,string name,int id){
        this->name=name;
        this->passcode=passcode;
        this->id=id;
    }
    void into(){
cout<<"My name is "<<name<<",my id is "<<id<<" pass code is ="<<passcode<<endl;
    }

void setPass(string s){
  passcode=s;
  }
};
int main(){
    student s1;
    student s2("111","Joshi",1);
    student s3;
    s3=s2;
    s3.into();
 /*   s1.name="Aman";
    s1.id=1;
    s1.setPass("001");
    s1.into(); 
*/
    return 0;
}