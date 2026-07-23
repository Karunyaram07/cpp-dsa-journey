#include<bits/stdc++.h>
using namespace std;
vector<int> generateRow(int row){
        vector<int> temp;
        temp.push_back(1);
        int res=1;
        for(int col=1;col<row;col++){
            res*=(row-col);
            res/=col;
            temp.push_back(res);
        }
        return temp;
    }
int main(){
    vector<vector<int>> ans;
    int n=5;
    for(int i=1;i<=n;i++){
        ans.push_back(generateRow(i));
    }

    for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout << ans[i][j] << " ";
    }
    cout << endl;
}
    
}