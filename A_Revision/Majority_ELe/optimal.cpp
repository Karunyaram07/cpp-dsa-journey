#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,2,2,1,1,2,2,3}; //Moore Voting Method
    int n=v.size();
    int cnt=0;
    int el;
    for(int i=0;i<n;i++){
        if(cnt==0){
            el=v[i]; //! Setting the First ELement (Moving the i when cnt becomes ZERO, And ATLAST Getting the element with majority)
            cnt++;
        }
        else if(v[i]==el){
            cnt++;
        }
        else{
            cnt--;
        }
    } //el will come like el=5 or 6 like that

    int cnt1=0;
    for(int i=0;i<n;i++){
        if(v[i]==el){ 
            cnt1++;
        }
    }
    if(cnt1>n/2){ //!Checking whether the el element is maximum than n/2 value for forming as the MAjority Element
        cout<<"The majority ele is: "
        <<el;
    }




}