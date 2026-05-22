#include<bits/stdc++.h>
using namespace std;
void printtoN(int i,int n){
    if(i<1) return;
    printtoN(i-1,n);
    cout<<"The number is: "<<i<<endl;
}
int main(){
    printtoN(5,5);

}