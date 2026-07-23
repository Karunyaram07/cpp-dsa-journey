#include<bits/stdc++.h>
using namespace std;
long long nCr(int row,int col){
    long long res=1;
    for(int i=0;i<col;i++){
        res*=(row-i);
        res/=(i+1);
    }
    return res;
}
int main(){
    int row=5;
    for(int i=1;i<=5;i++){//!5 Columns starting from 1 to 5 
        //! nth row means n elements... n elements means n columns
        cout<<nCr(row-1,i-1);
    }
}