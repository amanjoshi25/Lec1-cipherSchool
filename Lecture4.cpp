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


//iterative fun
/*int power(int base,int pow){
    int num=1;
    for(int i=0;i<pow;i++){
        num*=base;
    }
    return num;
}*/
//recursion for power function
int power(int base,int pow){
  //trick for remenber the recursion
    /*
    1.base case(when we have to end the recurtion if we not initial think this loop is infinity)
    2.Assumption(what a small code doing )
    3.calculation(what the big code doing)
    */
    if(pow==0)return 1;
    int smallAns=power(base,pow-1);
    return smallAns*base;

}
int main()
{
    cout<<power(10,7);
return 0;
}