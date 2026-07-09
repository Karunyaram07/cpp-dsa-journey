#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> v={-2,-3,4,-1,-2,1,5,-3};
int sum=0;
int maxi=INT_MIN;
int n=v.size();
int ansStart=0;
int ansEnd=0;
int start=0;
for(int i=0;i<n;i++){
    
    sum+=v[i];
    if(sum>maxi){
        maxi=sum;
        ansEnd=i;
        ansStart=start;
    }
    if(sum<0){
        sum=0;
        start=i+1;
    }

    
}


cout << "Maximum Sum Subarray: ";

    for(int i = ansStart; i <= ansEnd; i++) {
        cout << v[i] << " ";
    }

    cout << "\nMaximum Sum = " << maxi;

    return 0;
}