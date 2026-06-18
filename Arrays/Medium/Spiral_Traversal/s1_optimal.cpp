#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v={{1,2,3,4,5,6},
                            {20,21,22,23,24,7},
                        {19,32,33,34,25,8},
                    {18,31,36,35,26,9},
                {17,30,29,28,27,10},
            {16,15,14,13,12,11}};

int n=v.size();
int m=v[0].size();
int top=0,bottom=n-1;
int left=0,right=m-1;
vector<int> ans;
while(top<=bottom && left<=right){
    for(int i=left;i<=right;i++){
        ans.push_back(v[top][i]);
    }
    top++;
    for(int i=top;i<=bottom;i++){
        ans.push_back(v[i][right]);
    }
    right--;
    if(top<=bottom){
    for(int i=right;i>=left;i--){
        ans.push_back(v[bottom][i]);
    }
    bottom--;
    }
    if(left<=right){
    for(int i=bottom;i>=top;i--){
        ans.push_back(v[i][left]);
    }
    left++;
    }
}
for(int i=0;i<(n*m);i++){
    cout<<ans[i]<<" ";
}
}
