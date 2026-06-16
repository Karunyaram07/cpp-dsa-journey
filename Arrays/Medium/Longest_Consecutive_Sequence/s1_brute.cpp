#include<bits/stdc++.h>
using namespace std;
bool ls(vector<int> arr,int num){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==num){
            return true;
        }
       
    }
     return false;
}
int main(){
    vector<int> v={102,4,100,1,101,3,2,1,1};
    int n= v.size();
    int cnt=0;
    int x=0;
    int longest=0;
    for(int i=0;i<n;i++){
        x=v[i];
        cnt=1;
        while(ls(v,x+1)==true){
            x+=1;
            cnt+=1;
        }
        longest=max(longest,cnt);
    }
    cout<<"The longest consecutive sequence is: "
    <<longest;
}