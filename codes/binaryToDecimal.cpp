#include<iostream>
#include<cmath>
using namespace std;
int binaryToDecimal(int n){
    int ans=0;
    int i=0;
    while(n>0){
        int p=n%10;
        ans+=p*pow(2,i);
        n/=10;
        i+=1;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<binaryToDecimal(n);
}