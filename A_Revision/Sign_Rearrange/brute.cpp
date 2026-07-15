#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={3,1,-2,-5,2,-4};
      int n=arr.size();
    vector<int> ans(n);
  
    vector<int> pos;
    vector<int> neg;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }
    //alternate signs

    for(int i=0;i<n/2;i++){
        ans[2*i]=pos[i];
        ans[2*i+1]=neg[i];
    }
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]
        <<endl;
    }
    
}