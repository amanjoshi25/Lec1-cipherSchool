#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
class uk{
    public:
    int kms;
    int mts;
    void display(){
        cout<<kms<<"kms and"<<mts<<"mts"<<endl;
    }
};
class us{
    public:
    int miles;
    int feet;
    us(int m,int f){
        miles=m;
        feet=f;

    }
us(uk obj){
    miles=obj.kms/1.6;
    feet=obj.mts/0.3;
    
}

    void display(){
        cout<<miles<<"miles ans"<<feet<<endl;
    }
    operator uk(){
        //return
        uk duk;
        duk.kms=miles*1.6;
        duk.mts=feet*0.3;
        return duk;

    }
};
int main()
{
    us dus(5,10);
    uk duk;
    duk=(uk)dus;
    us dus2=duk;//explixt calling
    //us dus2(duk) implicit calling
return 0;
}