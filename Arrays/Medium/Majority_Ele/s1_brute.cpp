#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,1,1,1,1,2,2,3};
    int n=arr.size();
  
    for(int i=0;i<n;i++){
          int cnt=0;


        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]) cnt+=1;;
        }
        if(cnt>n/2){ 
            cout<<arr[i];
            return 0;
        }
    }
}