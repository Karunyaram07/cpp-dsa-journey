#include<bits/stdc++.h>
using namespace std;

int find_largest(vector<int> &arr){
    int largest=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int main(){
    int slargest=0;
    vector<int> arr={23,45,111,540,96};
    int largest=find_largest(arr);
    sort(arr.begin(),arr.end());
 
    for(int i=arr.size()-2;i>0;i--){
        if(arr[i]!=largest){
            slargest=arr[i];
            break;
        }

    }
    cout<<"The second largest Element is: "<<slargest;


}