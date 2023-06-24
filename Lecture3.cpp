#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
//pass by val
/*void increment(int a){
    a++;
    return ;
}
*/
//pass bt pointer
void increment(int*a){
    (*a)++;
    return ;
}
/*
void increment(int&a){
    a++;
    return ;
}
*/
int main()
{
    int i=11;
increment(&i);
cout<<i<<endl;

return 0;
}