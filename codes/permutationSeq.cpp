#include<bits/stdc++.h>
#include<vector>
using namespace std;
void permu(int ind,vector<int> &a,vector<vector<int>> &ans,vector<int> &ds){
    if(ind==a.size()){
    ans.push_back(ds);
    return;
    }
    for(int i=ind;i<a.size();i++){
        ds.push_back(a[i]);
        permu(i+1,a,ans,ds);
    }

}
int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    vector<vector<int>> ans;
    vector<int> ds;
    permu(0,a,ans,ds);
    for(auto ele:ans)
    cout<<ele<<" ";
}