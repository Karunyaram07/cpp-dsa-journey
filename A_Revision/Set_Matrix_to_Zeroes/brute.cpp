#include<bits/stdc++.h>
using namespace std;
void mark_down(int i,vector<vector<int>> &mat){ //!Passin the original defined matrix
    int m=mat[0].size(); 
    for(int j=0;j<m;j++){
        if(mat[i][j]!=0){
        mat[i][j]=-1;
        }
    }
}
void markdown(int j,vector<vector<int>> &mat){
    int n=mat.size(); 
    for(int i=0;i<n;i++){
        if(mat[i][j]!=0){
        mat[i][j]=-1;
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
        if(mat[i][j]==0){
            mark_down(i,mat);
            markdown(j,mat);
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