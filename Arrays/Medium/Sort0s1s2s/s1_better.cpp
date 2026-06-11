//This is the better solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    //Keeping track for count_0,count_1,count_2s
    vector<int> v={0,1,1,2,2,2,0};
    int count_0=0;
    int count_1=0;
    int count_2=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0) count_0+=1;
        if(v[i]==1) count_1+=1;
        if(v[i]==2) count_2+=1;
    }
    for(int i=0;i<count_0;i++){
        v[i]=0;
    }
    for(int i=count_0;i<count_0+count_1;i++){
        v[i]=1;
    }
    for(int i=count_0+count_1;i<v.size();i++){
        v[i]=2;
    }
    for(int i=0;i<v.size();i++){
        cout<<"The Elements are: "
        <<v[i]
        <<endl;
    }
}

