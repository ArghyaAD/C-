#include<bits/stdc++.h>
using namespace std;
void insertAtButtom(stack<int> &st,int val){
    if(st.empty()){
        st.push(val);
        return;
    }
    int topele=st.top();
    st.pop();
    insertAtButtom(st,val);
    st.push(topele);
}
void reverse(stack<int> &st){
    if(st.empty())return;
    int topele=st.top();
    st.pop();
    reverse(st);
    insertAtButtom(st,topele);
}
int main(){
    stack<int> st;
    for(int i=1;i<=4;i++)
    st.push(i);
    reverse(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

}