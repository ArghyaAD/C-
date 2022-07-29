#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"how many rows/columns?";
    cin>>n;
    for(int i=1;i<=n;i++){
            for(int s=n-i;s>0;s--){
                cout<<" "<<"  ";
            }
            for(int t=(i*2)-1;t>0;t--){
                cout<<"*"<<"  ";
            }
            for(int s=n-i;s>0;s--){
                cout<<" "<<"  ";
            }
        cout<<endl;
    }
    for(int i =n;i>=0;i--){
        for(int j=n-i;j>0;j--){
            cout<<" "<<"  ";
        }
        for(int j =(i*2)-1;j>0;j--){
            cout<<"*"<<"  ";
        }
        for(int j =n-i;j>0;j--){
            cout<<" "<<"  ";
        }
        cout<<endl;
    }
}