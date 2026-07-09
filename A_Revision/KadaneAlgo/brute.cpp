#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> v={-2,-3,4,-1,-2,1,5,-3};
int n = v.size();
int maxi=0;
for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++){
        sum+=v[j];
        maxi=max(maxi,sum);
    }
}
cout<<"The max subarray length: "
<<maxi;

}