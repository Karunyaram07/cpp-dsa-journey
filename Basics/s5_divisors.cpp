#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> factors;
    int num=12;
    int root=sqrt(n);
    for(int i=1;i<=root;i++){
        if(num%i==0){
            factors.push_back(i);
            if((num/i)!=i){
                factors.push_back((num/i));
            }
        }
    }
    for(auto it:(factors)) cout<<it<<endl;
}