#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> v={2,2,3,3,1,2,3};
int n=v.size();
map<int,int> mpp;
for(int i=0;i<n;i++){
    mpp[v[i]]+=1;
}
for(auto it:mpp){
    if(it.second>n/2){
        cout<<"The majority element is: "
        <<it.first;
        return 0;
    }
    
}
cout<<"No majority Element is there...";


}