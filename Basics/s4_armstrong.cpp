#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=1634;
    int og=num;
    int expo=(int)log10(num)+1;
    int sum=0;
    int last_digit=0;
    while(num>0){
        last_digit=num%10;
        sum+=pow(last_digit,expo);
        num/=10;
    }
    if(og==sum) cout<<"It is an armstrong number"; else cout<<"Notan armstrong";
}