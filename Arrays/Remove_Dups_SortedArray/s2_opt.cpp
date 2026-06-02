#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={2,3,4,5,5,6,6,6};
    int i=0;
    for(int j=1;j<arr.size();j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    cout<<"The Number of Elements in the array without duplicates are: "<<i+1;

    arr.resize(i+1);
    for(auto it:arr){
        cout<<it<<endl;
    }
}