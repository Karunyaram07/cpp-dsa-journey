#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={10,22,12,3,0,6};
    vector<int> ans;
    int n=v.size();
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(v[i]>maxi){
            ans.push_back(v[i]);
        }
        maxi=max(maxi,v[i]);
    }
    for(int x:ans){
        cout<<x<<" ";
    }
}