#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    string s="-+7*45+20";
    int result=0;
    int n=s.length()-1;
    for(int i=n;i>=0;i--){
        if(s[i]>='0' && s[i]<='9')st.push(s[i]-'0');
        else{
            int n1=st.top();
            st.pop();
            int n2=st.top();
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