#include<bits/stdc++.h>
#include<stack>
using namespace std;
void display(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}
void insertAtBottom(stack<int> &st,int val){
    if(st.empty()){
        st.push(val);
        return;
    }
    int topele=st.top();
    st.pop();
    insertAtBottom(st,val);
    st.push(topele);
}
void reverse(stack<int> &st){
    if(st.empty())return;
    int topele=st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,topele);
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    display(st);
    reverse(st);
    display(st);
}