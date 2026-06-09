#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec={1,1,1,2,3,1,1,1,1};
    long long sum=0; //We need a sum
    int maxLen=0; //Length
    int k=4;
    //Needs a map
    unordered_map<long long,int> prefSum;
    for(int i=0;i<vec.size();i++){
        sum+=vec[i]; //Calculating from 0 to current index
        if(sum==k){ // Sum got equals our target
                maxLen=max(maxLen,i+1);
        }
        long long rem=sum-k;
        if(prefSum.find(rem)!=prefSum.end()){ // is in the
            int len=i-prefSum[rem];
            maxLen=max(maxLen,len);
        }
        if(prefSum.find(sum)==prefSum.end()){
            prefSum[sum]=i;
        } //If notin the current then add
    }
    cout<<"Max Length is: ";
    cout<<maxLen;

    
}