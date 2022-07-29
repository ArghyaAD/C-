#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sort[n];

    for (int i=0;i<n;i++){
        cin>>sort[i];
    }

    for (int i=0;i<n;i++){
        cout<<sort[i]<<" ";
    }

    cout<<endl;

    // for (int i=0;i<n-1;i++){
    //     for (int j=i+1;j<n;j++){
    //         if(sort[j]<sort[i]){
    //             int temp=sort[i];
    //             sort[i]=sort[j];
    //             sort[j]=temp;
    //         }
    //     }
    // }

    // int counter=1;

    // while(counter<n){
    //     for(int i=0;i<n-counter;i++){
    //         if(sort[i]>sort[i+1]){
    //             int temp=sort[i];
    //             sort[i]=sort[i+1];
    //             sort[i+1]=temp;
    //         }
    //     }

    //     counter++;
    // }

    for (int i=1;i<n;i++){
        int current = sort[i];
        int j=i-1;
        while(sort[j]>current && j>=0){
            sort[j+1]=sort[j];
            j--;
        }
        sort[j+1]=current;
    }

    for(int i=0;i<n;i++){
        cout<<sort[i]<<" ";
    }
}