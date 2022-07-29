#include<bits/stdc++.h>
using namespace std;
int main(){
    int inv=0;
    // int ind=0;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int i=0,j=1;
    while(i<j && i<n-1){
        if(arr[i]>arr[j]){
            // if(j-i==1)ind+=1;
            inv+=1;
        }
        if(j>n-1){
            i+=1;
            j=i;
        }
        j+=1;

    }
    // if(inv==ind)cout<<1;
    // else cout<<0;
    cout<<inv;
}