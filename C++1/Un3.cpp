#include <iostream>
#include <vector>
using namespace std;

void helper2(vector<int> &sumArr , int x){
    for(int i=0;i<32;i++){
        int ithBit=x & (1<<i);
        if(ithBit){
            sumArr[i]++;
        }
    }
}
int number_from_arr(vector<int> sumArr){
    int sum=0;
    for(int i=0;i<32;i++){
        sum+=(sumArr[i] * (1<<i)); 
    }
    return sum;
}

int helper(vector <int> arr){
    vector<int> sumArr(32,0);
    for(int i: arr){
        helper2(sumArr , i);
    }

    for(int i=0;i<32;i++){
        sumArr[i]=sumArr[i]%3;
    }
    return number_from_arr(sumArr);


}

int main(){
    vector<int> arr = {1,2,3,1,2,3,4,1,2,3,4,4,6};
    cout<<helper(arr);
}