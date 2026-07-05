#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={2,2,3,3,1,2,2};
    int n=v.size();
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(v[i]==v[j]){
                cnt++;
                if(cnt>n/2){
                    cout<<"The majority Element is: "
                    <<v[i];
                    return 0;
                }
            }
        }
    }
}