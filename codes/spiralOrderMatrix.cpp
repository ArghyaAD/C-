#include<bits/stdc++.h>
#include<array>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    int a[n][m];

    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    int rowst=0,rowed=n-1,colst=0,coled=m-1;

    while(rowst<=rowed && colst<=coled){
        for(int col=colst;col<=coled;col++){
            cout<<a[rowst][col]<<" ";
        }
        rowst++;
        for(int row=rowst;row<=rowed;row++){
            cout<<a[row][coled]<<" ";
        }
        coled--;
        if(rowst<=rowed){
        for(int col=coled;col>=colst;col--){
            cout<<a[rowed][col]<<" ";
        }
        }
        rowed--;
        if(colst<=coled)
        {
        for(int row=rowed;row>=rowst;row--)
        {
            cout<<a[row][colst]<<" ";
            }
        }
        colst++;
    }
    return 0;
    
}