#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={5,4,3,2,1};
    int n=v.size();
    //have to find the next permutation
    int ind=-1;
    //Find the BreakPoint 
    for(int i=n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            ind=i;
            break;
        }
    }
    if(ind==-1){
        reverse(v.begin(),v.end());
        for(int x : v)
        cout << x << " ";
        return 0;
        
    }

    //Upto br, what is the big ele
    for(int i=n-1;i>=ind;i--){
        if(v[i]>v[ind]){
            swap(v[i],v[ind]);
            break;
        }
    }
    reverse(v.begin()+ind+1,v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

}