#include<bits/stdc++.h>
using namespace std;
void rev_arr(int l,int r,int arr[],int n){
    if(l>=r) return;
    swap(arr[l],arr[r]);
    rev_arr(l+1,r-1,arr,n);
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rev_arr(0,n-1,arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }



}