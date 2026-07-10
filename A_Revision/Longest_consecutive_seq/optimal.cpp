#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={100,102,100,101,101,4,3,2,3,2,1,1,1,2};
    int n=v.size();
    unordered_set<int> u;
    int longest=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        u.insert(v[i]);
    }
    for(auto it:u){
        if(u.find(it-1)==u.end()){ //! If it has no prev ele
            int x=it;
            cnt=1;
            while(u.find(x+1)!=u.end()){
                cnt++;
                x++; //!update the x
            }

        }
        longest=max(longest,cnt);
    }
    cout<<"The max length is: "
    <<longest;
}