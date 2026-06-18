#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int n=v.size();
    int m=v[0].size();
    vector<vector<int>> ans(n,vector<int>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans[j][(n-1)-i]=v[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}