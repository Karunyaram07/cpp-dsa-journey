#include<bits/stdc++.h>
using namespace std;
int getRes(int row,int col){
    int res=1;
    for(int i=0;i<col;i++){
        res*=(row-i);
        res/=(i+1);
    }
    return res;
}
int main(){
    int n=4;
    int r=2;
    cout<<getRes(n-1,r-1);
    
}