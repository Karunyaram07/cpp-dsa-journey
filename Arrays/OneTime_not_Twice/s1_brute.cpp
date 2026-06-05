#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,1,2,2,3,3,5,6,6};
    int n=v.size();
    for(int i=0;i<n;i++){
        int num=v[i];
        int cnt=0;
        for(int j=0;j<n;j++){
            if(v[j]==num){
                cnt++;
            }
        }
        if(cnt==1) cout<<num;
    }
}