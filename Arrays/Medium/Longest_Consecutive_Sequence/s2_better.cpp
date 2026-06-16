// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> v={100,102,100,101,101,4,3,2,3,2,1,1,1,2};

//     sort(v.begin(),v.end());

//     int n=v.size();
//     int longest=1;
//     int cnt=1;
//     int last_ele=v[0];

//     for(int i=1;i<n;i++){

//         if(v[i]==last_ele){
//             continue; // duplicate
//         }

//         if(v[i]==last_ele+1){
//             cnt++;
//         }
//         else{
//             cnt=1;
//         }

//         last_ele=v[i];
//         longest=max(longest,cnt);
//     }

//     cout<<"The Longest Element is: "<<longest;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={100,102,100,101,101,4,3,2,3,2,1,1,1,2};
    sort(v.begin(),v.end());
    int n=v.size();
    int longest=1;
    int cnt=1;
    int last_ele=v[0];
    for(int i=1;i<n;i++){
        if(v[i]==last_ele){
            continue;
        }
        else if(v[i]==last_ele+1){
            cnt++;
        }
        else{
            cnt=1;
        }
        last_ele=v[i];
        longest=max(longest,cnt);
    }
    cout<<"The Longest is: "
    <<longest;





}
