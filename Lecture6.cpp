#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
//pointers

int main()
{
    int a=10;
    int*p= &a; //pointer variable
    char ch= 'a';
    char* pch=&ch; 
  
    //Referencing
    cout<<&a<<endl;//print address
    cout<<p<<endl;//print address
    //Dereferencing
    cout<<*(&a)<<endl;//print value on that address
    cout<<*p<<endl;//print value on that address
   //size of operator
    cout<<sizeof(p)<<endl; //print the size of operator          
   cout<<sizeof(a)<<endl;
   cout<<sizeof(ch)<<endl;
   cout<<sizeof(pch)<<endl;
 if(sizeof(pch) == sizeof(a)){
    cout<<"hey"<<endl;

 }else{
    cout<<"hii"<<endl;
 }
 //pointers off pointer
/*
   1.int*p1=&a;
     int**p2=&p1;
     int***p3=&p2; 
   */
return 0;
}