//! TwoSum --> Any Two of the elements of the given array matches with the given target
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={2,6,5,8,11};
    int n=v.size();
    int target=14;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]+v[j]==target){
                cout<<"Yes"
                << "Yeas"<<endl;
                cout<<i
                <<j<<endl;

            }
        }
    }
}