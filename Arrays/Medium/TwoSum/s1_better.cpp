#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2,6,5,8,11};

    int target = 14;

    map<int,int> mpp;

    for(int i = 0; i < v.size(); i++)
    {
        int rem = target - v[i];

        if(mpp.find(rem) != mpp.end())
        {
            cout << "Indices are: "
                 << mpp[rem] << " "
                 << i;

            return 0;
        }

        mpp[v[i]] = i;
    }

    cout << "No pair found";
}