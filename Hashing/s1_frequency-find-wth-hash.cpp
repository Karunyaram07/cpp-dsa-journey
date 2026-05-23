#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cout<<"Enter the array size: ";
cin>>n;
map<int,int> mp;
int arr[n]={0};
for(int i=0;i<n;i++){
    cout<<"Enter the element: ";
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    mp[arr[i]]+=1;
}
int q;
cout<<"Enter the query size: ";
cin>>q;
int c;
while(q--){
    cout<<"Enter the element of the array: ";
    cin>>c;
    cout<<"The frequency of the element is: "<<mp[c]<<endl;
}


}

//Use the vector    