#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    list<int>l;
    l.push_back(10);
    l.push_back(20);
    l.push_front(30);
   // list<int>::iterator lit=l.begin();
    for(list<int>::iterator lit=l.begin();lit!=l.end();lit++){
        cout<<*lit<<" ";
    }
cout<<endl;
l.push_front(110);
l.pop_back();
l.pop_front();
for(list<int>::iterator lit=l.begin();lit!=l.end();lit++){
        cout<<*lit<<" ";
    }
cout<<endl;
l.sort();
for(list<int>::iterator lit=l.begin();lit!=l.end();lit++){
        cout<<*lit<<" ";
    }
    cout<<endl;
l.reverse();
for(list<int>::iterator lit=l.begin();lit!=l.end();lit++){
        cout<<*lit<<" ";
    }
    cout<<endl;

   vector<int>v={1,2,3,4,5,6,7,8,9};
   for(vector<int>::iterator it=v.begin();it!=v.end();it++){
    cout<<*it<<" ";
   }
   cout<<endl;
    vector<string>solar_sys={"mer","venus","earth","mars","jupiter","satrun","uranus","neptune"};
   
   
    vector<string>::iterator aman=solar_sys.begin();
    vector<string>::iterator amrita=solar_sys.begin();
    advance(aman,4);//can increment iterator to particular element and updates the value
    cout<<"lets go to "<<*aman<<endl;
   cout<<*next(aman,1)<<endl;//used to increment the iterator but not update the value and not use the negative values
   cout<<"Distance of both pilot ="<<distance(amrita,aman)<<"planet away"<<endl;
   cout<<*prev(aman,1)<<endl;//used to decrement the iterator but not update the value and not use the negative values
   cout<<"Distance of both pilot ="<<distance(amrita,aman)<<"planet away"<<endl;
   //distance()->difference between first and second args
   advance(aman,-2);
   cout<<"aman in ="<<*aman;
   cout<<"Distance of both pilot ="<<distance(amrita,aman)<<"planet away"<<endl;
  vector<int>arr(50);
  merge(v.begin(),v.end(),l.begin(),l.end(),arr.begin());
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
return 0;
}