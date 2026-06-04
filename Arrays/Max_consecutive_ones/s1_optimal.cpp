#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,1};
    int maxi=0;
    int cnt=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==1){
            cnt++;
            maxi=max(maxi,cnt);
        }
        else{
            cnt=0;
        }
    }
    cout<<"The maximum Number of Ones is : ";
    cout<<maxi;
}