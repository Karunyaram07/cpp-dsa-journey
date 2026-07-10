#include<bits/stdc++.h>
using namespace std;
bool linear_search(vector<int> arr,int x){
    int n= arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==x) 
        {
        return true;
        }
    }
    return false; 
}

int main(){
    vector<int> v={102,4,100,1,101,3,2,1,1};
    int n=v.size();
    int cnt=0;
    int longest=0;
    for(int i=0;i<n;i++){ //! Exploring whole array....
        int x=v[i];
        int cnt=1;
        while(linear_search(v,x+1)==true){
            cnt+=1;
            x+=1;
        }
        longest=max(longest,cnt);
     
    }
    cout<<"The longest length of consecutive sequence is "<<longest;
}