#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v = {34,77,211,999,22};
    int largest=v[0];
    for(auto it:v){
        if(it>largest) largest=it;
    }
    cout<<largest;
}