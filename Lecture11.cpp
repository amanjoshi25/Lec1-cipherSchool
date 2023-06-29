#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
#include <string.h>
using namespace std;
class student{
    string passcode;
    friend class bestFriend;
    protected:
       int age;
    public:
      string name;
      int id;
      student(int i,string n,string p,int a){
        name=n;
        id=i;
        passcode=p;
        age=a;
      }
friend void hacker(student s);
};
void hacker(student s){
    cout<<s.name<<s.id<<s.passcode<<" "<<s.age<<endl;
}
class bestFriend{
    public:
    void sharingsecret(student s){
        cout<<s.passcode<<" "<<s.age<<endl;
    }
};

int main()
{
    student s1(1,"Aman","0001",22);
    bestFriend bff;
    hacker(s1);

return 0;
}