#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={9,2,3,4};
    bool is_sorted=true;
    for(int i=0;i<v.size()-1;i++){
        if(v[i]>v[i+1]){
            is_sorted=false;
        }
    }
    cout<<"The elements are: "<<is_sorted;
}