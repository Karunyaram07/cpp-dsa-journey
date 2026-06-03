#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,0,0,0,0,0,4,5,6,7};
    vector<int> temp;
    for(int i=0;i<v.size();i++){
        if(v[i]!=0){
            temp.push_back(v[i]);
        }
    }
    for(int i=0;i<temp.size();i++){
        v[i]=temp[i];
    }
    for(int i=temp.size();i<v.size();i++){
        v[i]=0;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}