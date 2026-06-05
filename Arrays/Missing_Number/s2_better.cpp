#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,4,5};
    int n=5;
    vector<int> hash(n+1);
    for(int i=0;i<n-1;i++){
        hash[v[i]]=1;
    }
    for(int i=1;i<n;i++){
        if(hash[i]==0){
            cout<<"The missing Number is: ";
            cout<<i;
        }
    }
}