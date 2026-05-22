#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n<2) return n;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    cout<<"The Fibo array index of 5 is: "<<fibo(4)<<endl;

}