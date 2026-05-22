#include<bits/stdc++.h>
using namespace std;

int main(){
    int num = 1729;
    int rev = 0;
    int last_num;

    while(num > 0){
        last_num = num % 10;
        rev = (rev * 10) + last_num;
        num /= 10;   // FIXED
    }

    cout << rev;     // FIXED
}