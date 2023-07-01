//constructure in c++
//Default Constructor
//Parameterized Constructor
//copy Constructor
#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
class complexNumber{
    public:
    int real,img;
    complexNumber(int real,int img){
        this->real=real;
        this->img=img;
    }
    void display(){
        cout<<real<<"+i"<<img<<endl;
    }
    complexNumber plus(complexNumber c){
        int r=this->real=real+c.real;
        int i=this->img=img+c.img ;
    //return complex NUM
    complexNumber result(r,i);
    return result;
    }
complexNumber multiply(complexNumber c){
    int x=this->real*c.real;
    int y=this->real*c.img;
    int z=this->real*c.real;
    int a=this->real*c.img;

    return complexNumber(x-a,y+z);
}
complexNumber operator + (complexNumber c) {
int r=this->real + c.real;
int i=this->img+c.img;
return complexNumber(r, i);
    }
};

int main()
{
    complexNumber c1(5,5);
    complexNumber c2(1,1);
    complexNumber c4(4,6);
    complexNumber c3=c1.plus(c2.plus(c4));
     //c1+c2;
    //
    complexNumber c6=c1+c2;
    c6.display();
    complexNumber c5=c1.multiply(c2);
   c5.display();
return 0;

}