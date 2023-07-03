#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
class matrix{
    public:
    vector<vector<int>>mat;
    matrix(){
        mat = vector<vector<int>>(5,vector<int>(5,2));

    }
    void display(){
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void operator+(matrix m){
        for(int i=0;i<m.mat.size();i++){
            for(int j=0;j<m.mat[0].size();j++){
                this->mat[i][j]+=m.mat[i][j];
            }
        }
    }
};
int main()
{
    matrix m;
    m.display();
return 0;
}