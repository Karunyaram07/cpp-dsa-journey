#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,2,3,4,5,6,7};
    vector<int> temp;
    int d=7;
   
    for(int i=0;i<d;i++){
        temp.push_back(arr[i]);
    }
    for(int i=d;i<arr.size();i++){
        arr[i-d]=arr[i];
    }
    int j=0;
    for(int i=arr.size()-d;i<arr.size();i++){
        arr[i]=temp[j];
        j++;
    }
    for(auto it: arr){
        cout<<it<<endl;
    }
    
}