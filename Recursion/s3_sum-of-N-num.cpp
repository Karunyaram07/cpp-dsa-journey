#include<bits/stdc++.h>
using namespace std;
void sumf(int i,int sum){
    if(i<1){
        cout<<"The sum is: "<<sum<<endl;
        return;
    }
    sumf(i-1,sum+i);
}

int main(){
    sumf(5,0);

}