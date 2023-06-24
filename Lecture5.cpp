#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
//Recursion
/*Funtion call itself in a same funtion is called recursion*/
//Advantages
/*
  1.It makes our code shorter and clean
  2.Recursion is required in problems concerning data structures and advanced algorithms,
     such as Graph and Tree Trave
*/
//Disadvantages
/*
   1.it takes a lot of stack spce complexity high
   2.it uses more processor time.
   3.It is difficult to debug.
   4.Stack might overflow 
 */
//recursion for fictorial
int fictorial(int n){
if(n==0)return 1;
int smallFun=fictorial(n-1);
return n*smallFun;
}
int main()
{ int n;
cout<<"Enter the number ";
cin>>n;
int ans=fictorial(n);
cout<<ans<<endl;

return 0;
}