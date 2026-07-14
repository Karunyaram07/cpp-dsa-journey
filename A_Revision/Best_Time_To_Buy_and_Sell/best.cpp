#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={7,1,5,3,6,4};
    int mini=v[0];
    int profit=0;
    int n=v.size();
    for(int i=1;i<n;i++){
        int cost=v[i]-mini;
        profit=max(cost,profit);
        mini=min(mini,v[i]);
    }
    cout<<"The maximum profit we can obtain is: "<<profit;
}