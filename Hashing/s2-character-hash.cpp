#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "aahedsbsdjshcaav";

    int arr[26] = {0};

    for(int i = 0; i < s.size(); i++) {
        arr[s[i] - 'a']++;
    }

    cout << "The frequency of " << s[2]
         << " is: " << arr[s[2] - 'a'];

    return 0;
}