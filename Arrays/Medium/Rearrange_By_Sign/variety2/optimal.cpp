#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={-1,2,3,-4,-3,-1};
    int n=arr.size();
    vector<int> pos;
    vector<int> neg;
    vector<int> ans(n);
    for(int i=0;i<n;i++){ //Storing pos in pos array, neg in neg array
        if(arr[i]<0){
            neg.push_back(arr[i]);
        }
        else{
            pos.push_back(arr[i]);
        }
    }

   if(pos.size()>neg.size()){ //Pos array is greater than negative array
    for(int i=0;i<neg.size();i++){ // equal elements
        ans[2*i]=pos[i];
        ans[2*i+1]=neg[i];
    }
    int index=pos.size();
    for(int i=neg.size();i<pos.size();i++){ //remaining elements of positives
        ans[index]=pos[i];
        index++;
    }
   }
   else{
     for(int i=0;i<pos.size();i++){ // equal elements
        ans[2*i]=pos[i];
        ans[2*i+1]=neg[i];
    }
    int index=neg.size();
    for(int i=pos.size();i<neg.size();i++){//Remaining elements of Negatives
        ans[index]=neg[i];
        index++;
    }

   }
   for(int i=0;i<n;i++){
    cout<<"The Elements are: "
    <<ans[i]<<endl;
    
   }



}