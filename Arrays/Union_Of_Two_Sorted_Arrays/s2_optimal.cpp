#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v1={1,2,3,4,5,6};
    vector<int> v2={2,3,4,5};
    vector<int> unionArr;
    int n1=v1.size();
    int n2=v2.size();
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(v1[i]<=v2[j]){
            if(  unionArr.size()==0 || unionArr.back()!=v1[i]){
                unionArr.push_back(v1[i]);
            }
            i++;
        }
        else{
             if(unionArr.back()!=v2[j] || unionArr.size()==0){
                unionArr.push_back(v2[j]);
            }
            j++;
            
        }
    }
    while(i<n1){
        if(unionArr.back()!=v1[i] || unionArr.size()==0){
                unionArr.push_back(v1[i]);
            }
            i++;
        }
    while(j<n2){
        if(unionArr.back()!=v2[j] || unionArr.size()==0){
                unionArr.push_back(v2[j]);
            }
            j++;

    }
for(auto it:unionArr){
    cout<<it<<endl;
}

    }
