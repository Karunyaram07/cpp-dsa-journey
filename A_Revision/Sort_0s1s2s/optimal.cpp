#include<bits/stdc++.h>
using namespace std;
int main(){
    //!Using Dutch NAtional Flag ALgo  0000111010101222  low,mid,high 0tolow-1,lowtomid-1,high+1,n-1
    vector<int> v={0,1,1,2,2,2,0};
    int n= v.size();
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(v[mid]==0){
            swap(v[low],v[mid]);
            mid++;
            low++;
        }
        if(v[mid]==1){
            mid++;
        }
        if(v[mid]==2){
            swap(v[mid],v[high]);
            high--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" "
        <<endl;
    }
}