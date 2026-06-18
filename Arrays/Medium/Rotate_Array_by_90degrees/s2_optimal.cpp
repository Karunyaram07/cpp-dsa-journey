#include<bits/stdc++.h>
using namespace std;
void reverseArray(vector<vector<int>> &v,int row){
    int n=v.size();
    int left=0;
    int right=n-1;
    while(left<right){
        swap(v[row][left],v[row][right]);
        left++;
        right--;
    }
}
int main(){
    vector<vector<int>> v={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int n=v.size();
    //Upper Triangle Logic
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
                swap(v[j][i],v[i][j]);
            }
        }
    
      
            for(int i=0;i<n;i++){
                reverseArray(v,i);
            }
        
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

