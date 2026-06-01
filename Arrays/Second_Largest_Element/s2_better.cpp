#include<bits/stdc++.h>
using namespace std;
int find_largest(vector<int> &arr){
int largest=0;
for(int i=0;i<arr.size();i++){
    if(arr[i]>largest){
        largest=arr[i];
    }
}
return largest;
}


int main(){
    vector<int> arr={23,56,7,43,32,22};
    int slargest=INT_MIN;
    int largest=find_largest(arr);
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    cout<<"The second Largest Number is: "<<slargest;
    
}