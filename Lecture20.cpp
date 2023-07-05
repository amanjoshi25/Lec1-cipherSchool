#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    vector<string>solar_sys={"mer","venus","earth","mars","jupiter","satrun","uranus","neptune"};
    vector<string>::iterator aman=solar_sys.begin();
    vector<string>::iterator amrita=solar_sys.begin();
    advance(aman,2);//can increment iterator to particular element and updates the value
   cout<<"lets go to "<<*aman<<endl;
   cout<<*next(aman,1)<<endl;//used to increment the iterator but not update the value and not use the negative values
   
return 0;
}