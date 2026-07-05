//!Better approach to solve the sorting 0s,1s,2s is to track no.of 0s,1s,2s
#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> v={0,1,1,2,2,2,0};
int n= v.size();
int cnt_0=0;
int cnt_1=0;
int cnt_2=0;
for(int i=0;i<n;i++){
    if(v[i]==0){
        cnt_0+=1;
    }
    if(v[i]==1){
        cnt_1+=1;
    }
    if(v[i]==2){
        cnt_2+=1;
    }  
}

for(int i=0;i<cnt_0;i++){
    v[i]=0;
}
for(int i=cnt_0;i<cnt_0+cnt_1;i++){
    v[i]=1;
}
for(int i=cnt_0+cnt_1;i<n;i++){
    v[i]=2;
}

for(int i=0;i<n;i++){
    cout<<v[i]<<" "
    <<endl;
}


}