#include<bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &v){
int mini=0;
int n=v.size();
for(int i=0;i<=n-2;i++){
    mini=i;
    for(int j=i;j<=n-1;j++){
        if(v[j]<v[mini]){
            mini=j;
        }
    }
    swap(v[i],v[mini]);
}
}

int main(){
    vector<int> v;
    v={2,7,4,1,9};
    selection_sort(v);
    // int n=v.size();
    // int mini;
    // for(int i=0;i<n-2;i++){
    //     mini=i;
    //     for(int j=i;j<n-1;j++){
    //         if(v[j]<v[mini]){
    //             mini=j;
    //         }
    //     }
    //     swap(v[i],v[mini]);

    // }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

}