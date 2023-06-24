#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
//pointers off pointer
/*
   int*p1=&a;
     int**p2=&p1;
     int***p3=&p2;
   */
int main()
{  int a=10;
    int*p1=&a;
     int**p2=&p1;
     int***p3=&p2;
     
     //address are printed
     cout<<"address of a ="<<&a<<endl;//print address of a
     cout<<"address of a ="<<p1<<endl;//print address of a
     cout<<"address of p1 ="<<p2<<endl;//print adress of p1
     cout<<"address of p2 ="<<p3<<endl;//print address of p2

     cout<<"value of p2 ="<<*p3<<endl;//print value in p2
     cout<<"value of p1 ="<<**p3<<endl;//print address of p1
     cout<<"value of a"<<*p2<<endl;//print address of a
     //values are printed
     cout<<"value of a ="<<a<<endl;
     cout<<"value of a="<<*p1<<endl;//print value of a
     cout<<"value of a="<<**p2<<endl;//print value of a
     cout<<***p3<<endl;//print value of a

     
return 0;
}