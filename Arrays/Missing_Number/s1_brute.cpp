#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,4,5};
    int n= v[v.size()-1];
    for(int i=1;i<n;i++){
        int flag=0;
        for(int j=0;j<n-1;j++){
            if(v[j]==i){
                flag=1;
                break;
            }
            
        }
        if(flag==0){
                cout<<"The missing Element is: ";
                cout<<i;

            } 
    }
}