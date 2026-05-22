#include<bits/stdc++.h>
using namespace std;
int rev=0;
int num=3456;
int main(){
    int last_digit = 0;
    while(num>0){
        last_digit=num%10;
        rev=rev*10+last_digit;
        num/=10;
    }
    cout<<"The Reversed number is: "<<rev;
}