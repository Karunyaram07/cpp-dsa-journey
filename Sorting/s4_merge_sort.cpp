#include<bits/stdc++.h>
using namespace std;
void merger(vector<int> &arr,int low,int mid,int high){
    int left=low;
    int right=mid+1;
    vector<int> temp;
    while(left<=mid&&right<=high){

        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }

    }
    while(left<=mid){
        temp.push_back(arr[left]);
            left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
            right++;
    }

    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }

}
void merge_sort(vector<int> &v,int low,int high){
    if(low==high) return;
    int mid=(low+high)/2;
    merge_sort(v,low,mid);
    merge_sort(v,mid+1,high);
    merger(v,low,mid,high);
}

int main(){
    vector<int> d={34,66,11,2,90};
    merge_sort(d,0,d.size()-1);
    for(auto it:d){
        cout<<it<<endl;
    }
}