// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> v={-2,-3,4,-1,-2,1,5,-3};
//     int n=v.size();
//     int maxi=INT_MIN;

//     for(int i=0;i<n;i++){ //Array 
        
//         for(int j=i;j<n;j++){ //For every subarray set sum=0;
//             int sum=0;
//             for(int k=i;k<=j;k++){
//                 sum+=v[k];
//                 maxi=max(maxi,sum);

//             }
//         }
//     }
//     cout<<"The longest sum is: "
//     <<maxi;
// }





//Reduce the Time Complexity

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={-2,-3,4,-1,-2,1,5,-3};
    int n=v.size();
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=v[j];
            maxi=max(maxi,sum);
        }
    }
    cout<<"the max ele is: "
    <<maxi;

}