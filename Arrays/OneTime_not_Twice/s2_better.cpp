#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,1,2,2,3,3,4,4,5,5,6,6,7,7,8};
    map<long long,int> mpp;

    for(int i=0;i<v.size();i++){
        mpp[v[i]]++;
    }
    for(auto it:mpp){
        if(it.second==1){
            cout<<"The Element is: ";
            cout<<it.first;
        }
    }
}