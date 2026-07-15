#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int> arr={3,1,-2,-5,2,-4};
     int n=arr.size();
     vector<int> ans(n);
     
     int pos_index=0;
     int neg_index=1;
     for(int i=0;i<n;i++){
        if(arr[i]<0){
            ans[neg_index]=arr[i];
            neg_index+=2;
        }
        else{
            ans[pos_index]=arr[i];
            pos_index+=2;
        }
     }

     for(int i=0;i<n;i++){
        cout<<ans[i]
        <<endl;
     }


}