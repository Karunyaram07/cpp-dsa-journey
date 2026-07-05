#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int> v={2,6,5,8,11};
     int target=20;
     int left=0;
     int right=v.size()-1;
     while(left<right){
        int sum=v[left]+v[right];
        if(sum==target){
            cout<<"True";
            return 0; //! Imp to set for stopping remaining execution
        }
        else if(sum>target){
            right--;
        }
        else{
            left++;
        }
     }
     cout<<"Not found any pair for Two Sum";
}