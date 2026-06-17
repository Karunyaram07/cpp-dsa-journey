#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> mat = {
    {0, 1, 2, 0},
    {3, 4, 5, 2},
    {1, 3, 1, 5}
};
int col0=1;
//Setting internal markers itself
int n=mat.size();
int m=mat[0].size();
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(mat[i][j]==0){ //Internal Marking the zero elements
        mat[i][0]=0;//set first col as zero
        if(j!=0){
        mat[0][j]=0;   //set first row as zero
        }
        else{
            col0=0;
        }
    }
}
}
for(int i=1;i<n;i++){
    for(int j=1;j<m;j++){
        if(mat[i][j]!=0){  // The cell is not zero
            if(mat[0][j]==0 || mat[i][0]==0){ //corresponding firstrow vertical endpoint or col firstcol horiz endpoint is zero, put
                mat[i][j]=0;    
            }
        }
    }
}

//Solving the first row or first col
if(mat[0][0]==0){ //if first element is zero then using endpoints concept, the first col is zero
    for(int j=0;j<m;j++) mat[0][j]=0;    
}

if(col0==0){  //If col0 is 0 then using endpoints concept, the first row is allzero
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
