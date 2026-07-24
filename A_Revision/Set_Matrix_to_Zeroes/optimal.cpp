#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> mat = {
    {0, 1, 2, 0},
    {3, 4, 5, 2},
    {1, 3, 1, 5}
};

int n=mat.size();
int m=mat[0].size();
int col0=1;

//! If the array cell is zero then, change the insight outlines to ZERO

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(mat[i][j]==0){
            mat[i][0]=0;
            if(j!=0){
                mat[0][j]=0;
            }
            else{
                col0=0;
            }
        }
    }
}


for(int i=1;i<n;i++){
    for(int j=1;j<m;j++){
        if(mat[i][j]!=0){
            if(mat[i][0]==0 || mat[0][j]==0){
                mat[i][j]=0;
            }
        }
    }
}

if(mat[0][0]==0){
    for(int j=0;j<m;j++){
        mat[0][j]=0;
    }
}

if(col0==0){
    for(int i=0;i<n;i++){
        mat[i][0]=0;
    }
}


for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
}


}