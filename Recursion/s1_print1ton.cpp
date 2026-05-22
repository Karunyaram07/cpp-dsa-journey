#include<bits/stdc++.h>
using namespace std;
     void printnum(int i,int n){
        if(i>n) return;
        cout<<"The number is: "<<i<<endl;
        printnum(i+1,n);
    }
int main(){

    printnum(1,5);
   
}