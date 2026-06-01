#include<bits/stdc++.h>
using namespace std;


int findpi(vector<int> &arr ,int low,int high){
    int i=low;
    int j=high;
    int pivot=arr[low];
    while(i<j){
    while(arr[i]<=pivot && i<=high-1){
        i++;        
    }
    while(arr[j]>pivot && j>low+1){
        j--;        
    }

if(i<j){
    swap(arr[i],arr[j]);
}
}
    swap(arr[j],arr[low]);
    return j;
}
void qsort(vector<int> &v,int low,int high){
    if(low<high){
    int pivot = findpi(v,low,high);
    qsort(v,low,pivot-1);
    qsort(v,pivot+1,high);
    }

}


int main(){
    vector<int> v={22,33,45,2222,4444};
    qsort(v,0,v.size()-1);
    cout<<v[v.size()-1];
}


//Time complexity - O(NLOGN)