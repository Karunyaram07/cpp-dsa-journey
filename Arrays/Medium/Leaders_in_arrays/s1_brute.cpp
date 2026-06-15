#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={10,22,12,3,0,6};
    vector<int> ans;
    int n=v.size();
    for(int i=0;i<n;i++){
        bool leader=true;
        for(int j=i+1;j<n;j++){
            if(v[j]>v[i]){
                leader=false;
                break;
            }
        }
        if(leader==true){
            ans.push_back(v[i]);
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}