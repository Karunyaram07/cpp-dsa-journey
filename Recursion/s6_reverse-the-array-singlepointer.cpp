#include<bits/stdc++.h>
using namespace std;

void reverse_array(int l,int arr[],int n){
    if(l>=n/2) return;
    swap(arr[l],arr[n-l-1]);
    reverse_array(l+1,arr,n);
}
int main(){
    int n;
    int arr[n];
    cout<<"Enter the size of array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse_array(0,arr,n);
    cout<<"The elements are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }



}