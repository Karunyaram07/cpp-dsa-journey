#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={100,102,100,101,101,4,3,2,3,2,1,1,1,2};
    //Looping to find the longest consecutive sequence
    unordered_set<int> u;
    int n=v.size();
    for(int i=0;i<n;i++){
        u.insert(v[i]);
    }
    int longest=0;
     //Check for If the current element has the before ele in its array;
    for(auto it:u){
        if(u.find(it-1)==u.end()){//Not existing before element
            int cnt=1;
            int x=it;
            while(u.find(x+1)!=u.end()){ //Until consecutive ness exists
                cnt++;
                x=x+1;
            }
               longest=max(longest,cnt);
        }
     
    }
    cout<<"The cnt is: "
    <<longest;
}