// This is the Optimal Solution for 
// Longest Subarray with Sum K For Positives and Zeroes only Not Allows Negatives

#include<bits/stdc++.h>
using namespace std;
int main(){
    int k=6;
    
    vector<int> v={1,1,1,3,4,2,1,1,1,1,1,1,1};
    long long sum=v[0];
    int n=v.size();
    int left=0;
    int right=0;
    int maxLen=0;
    while(right<n){
        while(left<=right && sum>k){
            sum-=v[left];
            left++;
        }
        if(sum==k){
            maxLen=max(maxLen,right-left+1);
        }
        right++;
        if(right<n) sum+=v[right];
    }
    cout<<"The Maximum Length is: ";
    cout<<maxLen;
    


}