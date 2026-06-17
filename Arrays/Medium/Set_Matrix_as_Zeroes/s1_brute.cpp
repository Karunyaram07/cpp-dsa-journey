#include<bits/stdc++.h>
using namespace std;
void markRow(vector<vector<int>>& mat,int row){
    int m=mat[0].size();
    for(int j=0;j<m;j++){
        if(mat[row][j]!=0){
            mat[row][j]=-1;
        }
    }
}

void markCol(vector<vector<int>>& mat,int col){
    int n=mat.size();
    for(int i=0;i<n;i++){
        if(mat[i][col]!=0){
            mat[i][col]=-1;
        }
    }
}

int main(){
    vector<vector<int>> mat = {
    {0, 1, 2, 0},
    {3, 4, 5, 2},
    {1, 3, 1, 5}
};
int n=mat.size();
int m=mat[0].size();
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(mat[i][j]==0){//If the element is zero, then mark its rows and cols
            markRow(mat,i);
            markCol(mat,j);
        }
}
}

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(mat[i][j]==-1){
            mat[i][j]=0;
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

