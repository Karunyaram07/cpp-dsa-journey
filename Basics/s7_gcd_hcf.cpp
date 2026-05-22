#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=12;
    int b=18;
    int temp;
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    cout<<"GCD is: "<<a;
}