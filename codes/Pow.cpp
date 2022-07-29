#include<iostream>
using namespace std;
void p(double x,int n,double &ans){
    if(n==0)return;
    if(n>0){
        for(int i=0;i<n;i++){
            ans*=x;
        }
    }
    else if(n<0){
        for(int i=0;i<n;i++){
            ans/=x;
        }
    }
}
int main(){
    double x=2;
    int n=20;
    double ans=1;
    p(x,n,ans);
    cout<<ans;
   
}