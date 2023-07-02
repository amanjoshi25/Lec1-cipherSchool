//part2 type conversion
#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
class node{
    public :
    int data;
    node*next;
    node(int n){
        data =n;
        next=nullptr;
    }
};
 node * makeLL(){
    int data;
    cin>>data;
    node* h=NULL;
    node* temp=NULL;
    while(data!=-1){
        node*newnode=new node(data);
        if(h==NULL){
            h=newnode;
            temp=h;
        }else{
            temp->next =newnode;
            temp=newnode;


        }
        cin>>data;
    }
    return h;
 }
 void print(node* head){
    node*t=head;
    while(t!=NULL){
        cout<<t->data<<"->";
        t=t->next;

    }
    return;
 }
int main()
{
    node*head=makeLL();
    print(head);
return 0;
}