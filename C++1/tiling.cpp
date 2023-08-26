#include <iostream>
#include <vector>

using namespace std;
int helper(int n){
    if(n<4){
        return 1;
    }

    return helper(n-1) +helper(n-4);
}

int main(){
    int n;
    cin>>n;
    cout<<helper(n);
}