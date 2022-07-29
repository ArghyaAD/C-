#include<bits/stdc++.h>
#include<climits>
using namespace std;

int kadane(int a[],int n){
    int cursum=0,maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        cursum+=a[i];
        if(cursum<0){
            cursum=0;
        }
        maxsum=max(maxsum,cursum);
    }
    return maxsum;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int normsum,cirsum;

    normsum=kadane(arr,n);

    int totalsum=0;
    int max_so_far=INT_MIN;
    for(int i=0;i<n;i++){
        totalsum+=arr[i];
        max_so_far=max(max_so_far,arr[i]);
        arr[i]=-arr[i];
    }

    int minsum;

    minsum=kadane(arr,n);

    if(-minsum==totalsum){
        cout<<max_so_far;
    }
    else{
        cirsum=totalsum+minsum;
        cout<<max(normsum,cirsum);
    }
    
}