#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,2,2,1,1,2,2};
    map<int,int> mpp;
    int n=v.size();
    for(int i=0;i<n;i++){
        mpp[v[i]]+=1;
    }
    for(auto it:mpp){
        if(it.second>n/2){
            cout<<it.first;
            return 0;
        }
    }
}