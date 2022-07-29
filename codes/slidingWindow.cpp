#include<bits/stdc++.h>
using namespace std;
int maxx(deque<int> st){
    int maxval=INT_MIN;
    while(!st.empty()){
        maxval=max(maxval,st.back());
        st.pop_back();
    }
    return maxval;
}
int main(){
    int arr[]={1,3,-1,-3,5,3,6,7};
    int k=3,n=8;
    deque<int> store;
    for(int i=0;i<k;i++)
    store.push_back(arr[i]);
    vector<int> ans;
    ans.push_back(maxx(store));
    for(int i=k;i<n;i++){
        store.pop_front();
        store.push_back(arr[i]);
        ans.push_back(maxx(store));
    }
    for(auto ele:ans)
    cout<<ele<<" ";

}