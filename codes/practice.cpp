#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* right;
    node* left;
    node(int val){
        data=val;
        right=NULL;
        left=NULL;
    }
};
void predisplay(node* a){
    if(a==NULL)return;
    cout<<a->data<<" ";
    predisplay(a->left);
    predisplay(a->right);
}
void postdisplay(node* a){
    if(a==NULL)return;
    postdisplay(a->left);
    postdisplay(a->right);
    cout<<a->data<<" ";
}
void indisplay(node* a){
    if(a==nullptr)return;
    indisplay(a->left);
    cout<<a->data<<" ";
    indisplay(a->right);
}
int main(){
    node* a=new node(3);
    node* c=new node(9);
    a->left=c;
    c->left=new node(10);
    c->right=new node(4);
    node* b=new node(20);
    a->right=b;
    b->left=new node(15);
    b->right=new node(7);
    predisplay(a);
    cout<<endl;
    postdisplay(a);
    cout<<endl;
    indisplay(a);
}