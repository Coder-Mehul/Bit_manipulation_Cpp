#include <iostream>
using namespace std;

int CountBits(int n){
    int count=0;
    while(n>0){
        int lastBit=(n&1);
        count+= lastBit;
        n=n>>1;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int ans=CountBits(n);
    cout<< ans;
}