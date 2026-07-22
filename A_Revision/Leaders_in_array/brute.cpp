#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={10,22,12,3,0,6};
    vector<int> ans;
    int n=v.size();
    for(int i=0;i<n;i++){
         bool leader=true;
        for(int j=i;j<n-1;j++){
            if(v[j+1]>v[i]){
                leader=false;
                break;
            }
        }
        if(leader==true){
            ans.push_back(v[i]);
        }
    }

    for(int x:ans){
        cout<<x<<" ";
    }
}