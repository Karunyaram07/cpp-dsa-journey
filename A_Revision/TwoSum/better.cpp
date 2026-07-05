#include<bits/stdc++.h>
using namespace std;
int main(){
     map<int,int> mpp;
     vector<int> v={2,6,5,8,11};
     int target=14;
     int n=v.size();
     for(int i=0;i<n;i++){
        int rem=target-v[i];
        if(mpp.find(rem)!=mpp.end()){ //!Element is existing in the hashmap
            cout<<mpp[rem]<<" "
            <<i<<endl;
            return 0;
        }
        mpp[v[i]]=i;//!Adding the elements that are not in hashmap right now.
     }
     cout<<"Not found";
     

}