#include<bits/stdc++.h>
#include<vector>
using namespace std;
void permu(int ind,vector<int> &v,vector<int> &ans){
    if(ind==v.size()){
        int x=0;
        for(int i=0;i<v.size();i++){
            x=x*10 + v[i];
        }
        ans.push_back(x);
        return;
    }
    for(int i=ind;i<v.size();i++){
        swap(v[ind],v[i]);
        permu(ind+1,v,ans);
        swap(v[ind],v[i]);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=1;i<=n;i++)
    v.push_back(i);
    vector<int> ans;
    permu(0,v,ans);
    sort(ans.begin(),ans.end());
    for(auto ele:ans)
    cout<<ele<<" ";
}