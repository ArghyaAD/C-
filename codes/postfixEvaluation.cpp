#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    string s="46+2/5*7+";
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]>='0' && s[i]<='9')st.push(s[i]-'0');
        else{
            int n2=st.top();
            st.pop();
            int n1=st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(n1+n2);
                break;
            case '-':
                st.push(n1-n2);
                break;
            case '*':
                st.push(n1*n2);
                break;
            case '/':
                st.push(n1/n2);
                break;
            }
        }
    }
    cout<<st.top();
}