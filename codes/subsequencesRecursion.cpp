#include<bits/stdc++.h>
#include<vector>
using namespace std;
void subs(int a[],vector<int> &v,int n,int i){
    if(i==n){
        for(auto e:v)
        cout<<e<<" ";
        cout<<endl;
        return;
    }
    v.push_back(a[i]);
    subs(a,v,n,i+1);
    v.pop_back();
    subs(a,v,n,i+1);
}
int main(){
    int a[]={10,172,272,63,382,5};
    int n=6;
    vector<int> v;
    subs(a,v,n,0);
}