#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int> v={102,4,100,1,101,3,2,1,1};
     int n=v.size();
     int longest=0;
     sort(v.begin(),v.end());
     int last_ele=v[0]; //!First element as last
     int cnt=1;
     for(int i=1;i<n;i++){
        if(v[i]==last_ele+1){
            cnt++;
            last_ele=v[i];
        }
        else if(v[i]==last_ele){
            continue;
        }
        else{
            cnt=1;
        }
        longest=max(cnt,longest);
        last_ele=v[i];
     }
     cout<<"The length of longest consecutive sequence is :"
     <<longest;
}















