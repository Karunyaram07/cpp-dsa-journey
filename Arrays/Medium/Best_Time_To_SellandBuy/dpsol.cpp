#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int> prices = {7,1,5,3,6,4};
int profit=0;
int mini=prices[0];//Fixing the Selling Price
for(int i=1;i<prices.size();i++){
    profit=max(profit,prices[i]-mini); //Finding Profit for finding Best time to buy
    mini=min(mini,prices[i]);
}
cout<<"The Profit is: "
<<profit;
}