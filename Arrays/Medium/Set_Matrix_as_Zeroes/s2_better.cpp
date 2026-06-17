#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> mat = {
    {0, 1, 2, 0},
    {3, 4, 5, 2},
    {1, 3, 1, 5}
};

int n= mat.size();
int m=mat[0].size();
int row[n]={0};
int col[m]={0};
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(mat[i][j]==0){ //If matrix element is zero, then update the new col or row to 1
            row[i]=1;
            col[j]=1;
        }
    }
}

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(row[i]==1 || col[j]==1){
            mat[i][j]=0;//set to ZERO
        }
    }
}

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
}

}