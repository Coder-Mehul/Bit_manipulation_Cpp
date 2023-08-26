#include <iostream>
using namespace std;
long toBinary(int n){
    long ans=0;
    long p=1;
    while(n>0){
        int lastBit= n&1;
        ans += p*lastBit;

        p=p*10;
        n=n>>1;

    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<toBinary(n);
}