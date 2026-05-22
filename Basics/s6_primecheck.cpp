// #include<bits/stdc++.h>
// using namespace std;

// int vector_len(int n){
//     vector<int> arr;
//     for(int i=1;i*i<=n;i++){
//         if(n%i==0){
//             arr.push_back(i);
//             if((n/i)!=i) arr.push_back((n/i));
//         }
//     }

//     return arr.size();


// }

// int main(){
//     int n=10;
//     if(vector_len(n)==2) cout<<"It'a prime"; else cout<<"M";
    
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    bool prime= true;
    int n=10;
    if(n<2) prime=false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            prime=false;
            break;
        }
    }
    cout<<prime;
}