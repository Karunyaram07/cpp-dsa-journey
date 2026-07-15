#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={-1,2,3,4,-3,1};
    int n= v.size();
    vector<int> pos;
    vector<int> neg;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        if(v[i]<0){
            neg.push_back(v[i]);
        }
        else{
            pos.push_back(v[i]);
        }
    }

    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            ans[2*i]=pos[i];
            ans[2*i+1]=neg[i];
        }
        int index=neg.size()*2;
        for(int i=neg.size();i<pos.size();i++){
            ans[index]=pos[i];
            index++;
        }
    }
    else if(neg.size()>pos.size()){
        for(int i=0;i<pos.size();i++){
            ans[2*i]=pos[i];
            ans[2*i+1]=neg[i];
        }
        int index=pos.size()*2;
        for(int i=pos.size();i<neg.size();i++){
            ans[index]=neg[i];
            index++;
        }

    }
    else{

        for(int i=0;i<neg.size();i++){
            ans[2*i]=pos[i];
            ans[2*i+1]=neg[i];
        }

    }

     for(int x : ans)
        cout << x << " ";

}