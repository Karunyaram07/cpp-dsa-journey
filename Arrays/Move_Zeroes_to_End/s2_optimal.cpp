#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,0,0,0,2,4};
    int j=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<v.size();i++){
        if(v[i]!=v[j]){
            swap(v[i],v[j]);
            j++;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}