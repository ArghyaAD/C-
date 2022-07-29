#include<bits/stdc++.h>
using namespace std;

unordered_map<string,string>mp;
    
string tiny="http://tinyurl.com/";

string encode(string l) {
        char arr[]={'@','#','%','!','/','^'};
        char c;
        srand(time(nullptr));
        int x=rand() % 5;
        int y=rand() % 1000;
        c=arr[x];
   
        tiny+=to_string(y);
        tiny+=c;
        
        mp[tiny]=l;
        
        return tiny;
    }

string decode(string s) {
        return mp[tiny];
    }

int main(){
    string s;
    getline(cin,s);

    string en=encode(s);
    cout<<en<<endl;

    string dc=decode(en);
    cout<<dc<<endl;
    
}