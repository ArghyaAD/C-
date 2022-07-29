#include<iostream>
using namespace std;
bool check(int i,int n){
    if(i==n)return true;
    if(i>n)return false;
    if(check(i*4,n))
    return true;
}
int main(){
    int n;
    cin>>n;
    cout<<check(1,n);
}