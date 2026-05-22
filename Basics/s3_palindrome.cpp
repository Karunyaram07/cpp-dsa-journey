#include<bits/stdc++.h>
using namespace std;
int num=12321;
int main(){
    
    int last_digit=0;
    int rev=0;
    int my_num=num;
    while(num>0){
        last_digit=num%10;
        rev=rev*10+last_digit;
        num/=10;
    }
    int rev_num=rev;
    if(my_num==rev_num) cout<<"true"; else cout<<"false";

}