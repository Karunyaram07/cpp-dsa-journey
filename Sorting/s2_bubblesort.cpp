#include<bits/stdc++.h>
using namespace std;
void selection_sort(vector<int> &v){
int n=v.size();
for(int i=n-1;i>=1;i--){
    for(int j=0;j<=i-1;j++){
        if(v[j]>v[j+1]){
            swap(v[j],v[j+1]);
        }
    }
}
}
int main(){
    vector<int> arr;
    arr={33,56,12,22,11};
    int n=arr.size();
    selection_sort(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

}