#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);

    }
    int xo_r=0;
    for(int i=0;i<n;i++){
        xo_r=xo_r^arr[i];
    }
    cout<<xo_r;
}