// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> v={1,1,1,2,3,4,1,1,3,5};
//     // Generate all the sub arrays first
//     //Then Find the sum of Each of the Subarray
//     //The sum of which Sub array is equal to k and have the longest size
//     int n= v.size();
//     int ks=3;
//     int len=0;

//     for(int i=0;i<n;i++){ // Array 
  
//         for(int j=i;j<n;j++){ //Subarray Generating
//             int sum=0;
//             for(int k=i;k<=j;k++){ //Finding Sum for Each Subarray
//                 sum+=v[k];
//             }
//             if(sum==ks){
//             len=max(len,j-i+1);
//         }
//         }
        
//     }
//     cout<<"The Length is: "<<len;
// }





















// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int length=0;
//     vector<int> vec={1,2,2,1,1,1,3,2,1};
//     int d=3;
//     int n=vec.size();
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//             sum+=vec[j];
//             // int sum=0;
//             // for(int k=i;k<=j;k++){
//             //     sum+=vec[k];
//             // }
//             if(sum==d){
//                 length=max(length,j-i+1);
//             }
//         }
//     }
//     cout<<"the length is: ";
//     cout<<length;
// }






















#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec={1,1,1,3,2,4,1,1,2,1,1};
    int d=3;
    int len=0;
    int n=vec.size();
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=vec[j];
            if(sum==d){
                len=max(len,j-i+1);
            }
        }
    }
    cout<<"Length is: ";
    cout<<len;

}