#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={-2,-3,4,-1,-2,1,5,-3};
    int n=v.size();
    int maxi=INT_MIN;
    int sum=0;
    int start=0;
    int ansStart=-1;
    int ansEnd=-1;
    for(int i=0;i<n;i++){
        if(sum==0){
            start=i;
        }
        sum+=v[i];
        // maxi=max(maxi,sum);//Add to maxi first, then update the sum if it's negative
        if(sum>maxi){
            maxi=sum;
            ansStart=start;
            ansEnd=i;
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<"the maximum subarray sum is: "
    <<maxi<<endl;
    cout<<"Subarray: ";
    for(int i=ansStart;i<=ansEnd;i++){
        cout<<v[i]<<endl;
    }
}