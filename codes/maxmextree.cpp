#include <bits/stdc++.h>
using namespace std;
void dfs(int s , int par ,vector<int>adj[] , int a[] ,set<int>& dq ,int &maxi ,unordered_map<int,int>& mp){
    if(dq.find(a[s]) != dq.end())
    dq.erase(dq.find(a[s]));
    mp[a[s]]++;
    maxi = max(maxi , *dq.begin());
    for(int i = 0 ; i < adj[s].size() ; i++){
        if(adj[s][i] != par){
            dfs(adj[s][i] , s , adj , a , dq , maxi , mp);
        }
    }
    mp[a[s]]--;
    if(mp[a[s]] == 0)
    dq.insert(a[s]);
}
void solve(){
    int n ;
    cin>>n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
    cin>>a[i];
    }
    vector<int>adj[n];

    set<int>dq;

    for(int i = 0 ; i <= n + 1 ; i++){
    dq.insert(i);
    }
    for(int i = 1 ; i < n ; i++){
        int x , y;
        cin>>x>>y;
        x--,y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int maxi = 0;
    unordered_map<int,int>mp;
    dfs(0 , -1 , adj , a ,dq, maxi , mp);
    cout<<maxi<<"\n";
}
int main() {
	// your code goes here
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);
	// cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}