#include<bits/stdc++.h>
using namespace std;
int main(){
set<int> s;
vector<int> v={1,2,3,5,5,5,6};
for(int i=0;i<v.size();i++){
    s.insert(v[i]);
}
for(auto it:s){
    cout<<it<<endl;
}

int index=0;
for(auto it:s){
v[index]=it;
index++;
}
cout<<"The index is: "<<index;
}