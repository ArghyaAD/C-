#include<bits/stdc++.h>
using namespace std;
struct node{
    int val;
    string name;
    node(int x,string a){
        val=x;
        name=a;
    }
};
int main(){
    node* item = new node(5,"hello");
    node* one = new node(6,"bye");
    node* two = new node(7,"new");
    vector<node*>temp;
    temp.push_back(item);
    temp.push_back(one);
    temp.push_back(two);
    for(auto it:temp){
        cout<<it->val<<" ";
    }
    unordered_map<int,vector<node*>>mp;
    for(auto it:temp){
        mp[it->val].push_back(temp);
    }
    auto it = mp[5];
    cout<<it[0]->name<<" ";
}