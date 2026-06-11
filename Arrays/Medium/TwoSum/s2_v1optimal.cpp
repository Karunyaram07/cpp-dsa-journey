#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {2,6,5,8,11};

    sort(arr.begin(), arr.end());

    int left = 0;
    int right = arr.size() - 1;

    int target = 14;

    while(left < right)
    {
        int sum = arr[left] + arr[right];

        if(sum == target)
        {
            cout << "Yes";
            return 0;
        }
        else if(sum > target)
        {
            right--;
        }
        else
        {
            left++;
        }
    }

    cout << "No";
}