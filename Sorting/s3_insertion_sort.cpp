#include<bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int> &v){
    int n= v.size();
    int j=0;
    for(int i=0;i<n;i++){
        j=i;
        while(j>0&&v[j-1]>v[j]){
            swap(v[j-1],v[j]);
            j--;
        }
    }
}
int main(){
    vector<int> arr={45,67,9,54,112,21};
    insertion_sort(arr);
    for(auto it:arr){
        cout<<it<<endl;
    }
}