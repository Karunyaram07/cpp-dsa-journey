#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,0,0,0,0,2,0,2,2,2,2};
    int low=0;
    int mid=0;
    int high=v.size()-1;
    while(mid<=high){
        if(v[mid]==0){
            swap(v[mid],v[low]);
            mid++;
            low++;
        }
        else if(v[mid]==1){
            mid++;
        }
        else{
            swap(v[high],v[mid]);
            high--;
        }
    }
    for(int i=0;i<v.size()-1;i++){
        cout<<"The Elements are: "
        <<v[i]
        <<endl;
    }
}