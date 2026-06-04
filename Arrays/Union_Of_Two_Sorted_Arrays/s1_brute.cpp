#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1={1,2,3,4,5};
    vector<int> v2={6,7,8,9};

    vector<int> unionArr(v1.size()+v2.size());
    set<int> s;

    for(int i=0;i<v1.size();i++){
        s.insert(v1[i]);
    }
    for(int i=0;i<v2.size();i++){
        s.insert(v2[i]);
    }
    int index=0;
    for(auto it:s){
        unionArr[index]=it;
        index++;

    }
    for(auto it: unionArr){
        cout<<it<<endl;
    }
    int i=0;
    int j=0;
    
}