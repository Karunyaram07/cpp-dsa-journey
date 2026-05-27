#include<bits/stdc++.h>
using namespace std;
int p_ind(vector<int> &arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;

    while(i<j){
        while(arr[i]<=pivot&&i<=high-1){
            i++;
        }
        while(arr[j]>pivot&&j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    if(i>j){
        swap(arr[j],arr[low]);
    }
    return j;

}
void quicksort(vector<int> &arr,int low,int high){
    if(low<high){
        int pivot = p_ind(arr,low,high);
        quicksort(arr,low,pivot-1);
        quicksort(arr,pivot+1,high);
    }
}



int main(){
    vector<int> arr={34,22,97,45,21,11};
    quicksort(arr,0,arr.size()-1);

    for(auto it:arr){
        cout<<it<<endl;
    }
}