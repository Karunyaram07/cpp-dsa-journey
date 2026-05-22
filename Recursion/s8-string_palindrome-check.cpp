#include<bits/stdc++.h>
using namespace std;
bool str_palindrome(int i,string s){
    int n=s.size();
    if(i>=n/2) return true;
    if(s[i]!=s[n-i-1]) return false;
    return str_palindrome(i+1,s);
}
int main(){
    string r="rar";
    cout<<str_palindrome(0,r);


}