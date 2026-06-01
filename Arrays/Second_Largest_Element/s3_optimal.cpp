#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={23,11,33,77,2};
    int largest=v[0];
    int slargest=INT_MIN;
    for(int i=1;i<v.size();i++){
        if(v[i]>largest){
            slargest=largest;
            largest=v[i];
        }
        else{
            if(v[i]!=largest&&v[i]>slargest){
                slargest=v[i];
            }
        }
    }
    cout<<"The large Number is: "<<largest<<endl;
    cout<<"The second large Number is: "<<slargest;
    
}