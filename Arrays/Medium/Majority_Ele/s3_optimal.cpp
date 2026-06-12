#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,2,2,1,1,2,2,3}; //Moore Voting Method
    int n=v.size();
    //Take cnt value as 0 before taking the array After taking an element, increase count to 1
    int cnt=0;
    int el;
    for(int i=0;i<n;i++){
        if(cnt==0){ //Set cnt to 1 after taking an array ele
            cnt=1;
            el=v[i];
        }
        else if(v[i]==el){ //If current element is our taken array ele then increase count
            cnt++;
        }
        else{                 // If not decrease
            cnt--;
        }
    }
    int cnt1=0; //Checking that returned element satifies no.ofele>n/2
    for(int i=0;i<n;i++){ //No.of repeats of our Returned element
        if(v[i]==el) cnt1++; 
    }
    if(cnt1>n/2) cout<<"The Element is: "
                    <<el;


}
