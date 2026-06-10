// This is the Optimal Solution for 
// Longest Subarray with Sum K For Positives and Zeroes and also Allows Negatives
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec={1,1,1,2,3,1,1,1,1};
    long long sum=0; //We need a sum
    int maxLen=0; //Length
    int k=4;
    //Needs a map
    unordered_map<long long,int> prefMap;
    for(int i=0;i<vec.size();i++){
        sum+=vec[i]; //Calculating from 0 to current index
        if(sum==k){ // Sum got equals our target
                maxLen=max(maxLen,i+1);
        }
        long long rem=sum-k;
        if(prefMap.find(rem)!=prefMap.end()){ // is in the prefMap
            int len=i-prefMap[rem];
            maxLen=max(maxLen,len);
        }
        if(prefMap.find(sum)==prefMap.end()){
            prefMap[sum]=i;
        } //If notin the current then add
    }
    cout<<"Max Length is: ";
    cout<<maxLen;

    
}