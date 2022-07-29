#include<bits/stdc++.h>
#include<vector>
using namespace std;
// int cnt=0;
int vecsum(vector<int> v){
    int totalsum=0;
    for(int i=0;i<v.size();i++)
    totalsum+=v[i];
    return totalsum;
}
void subs(int a[],vector<int> &v,int n,int i,int key){
    if(i==n){
        if(vecsum(v)==key){
        for(auto e:v)
        cout<<e<<" ";
        cout<<endl;
        // cnt+=1;
        }
        return;
    }
    v.push_back(a[i]);
    subs(a,v,n,i+1,key);
    v.pop_back();
    subs(a,v,n,i+1,key);
}
int main(){
    int a[]={1,2,1};
    int n=3;
    int key=2;
    vector<int> v;
    subs(a,v,n,0,key);
    // cout<<cnt;
}