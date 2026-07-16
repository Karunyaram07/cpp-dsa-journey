#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={5,1,3,2,4};
    int n=v.size();
    //!Find the breakpoint
    int ind=-1;
    for(int i=n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            ind=i;
            break;
        }
    }

    if(ind==-1){ //! It is the last element
        reverse(v.begin(),v.end());
        for(int x:v){
            cout<<x<<" ";
        }
        return 0;

    }

    for(int i=n-1;i>ind;i--){
        if(v[i]>v[ind]){
            swap(v[i],v[ind]);
            break;
        }
    }
    reverse(v.begin()+ind+1,v.end());
    for(int x:v){
        cout<<x<<" ";
    }
}