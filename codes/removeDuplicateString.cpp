#include<bits/stdc++.h>
using namespace std;
string rem(int i,string str){
    if(str.length()==0)return "";
    char s=str[i];
    if(str[i]==str[i+1])
        return rem(i,str.substr(1));
    return s+rem(i,str.substr(1));

}
int main(){
    string str;
    cin>>str;
    cout<<rem(0,str);
}