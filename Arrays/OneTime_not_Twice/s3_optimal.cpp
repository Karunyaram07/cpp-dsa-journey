#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,1,2,2,3,3,4,4,5,5,6,6,7,7,8};
    int xorr=0;
    for(int i=0;i<v.size();i++){
        xorr=xorr^v[i];
    }
    cout<<"The Single repeated element in the world of Twice repeated elements is";
    cout<<" ";
    cout<<xorr;
    


}