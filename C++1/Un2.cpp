#include <iostream>
#include <vector>
using namespace std; 
void findUniques(vector<int> arr){
    int res=0;
    for(int i=0;i<arr.size();i++){
        res=res^arr[i];
    }

    int pos=0;
    int temp=res;
    while(res & 1 !=1){
        pos++;
        res=res>>1;
    }
    int seta=0;
    int setb=0;
    int mask=1<<pos;
    for(int i=0;i<arr.size();i++){
        if(arr[i]&mask >0){
            seta=seta^arr[i];
        }
        else setb=setb^arr[i];
    }
    cout<<seta <<endl;
    cout<<setb;
}
int main(){
    vector<int> arr= {1,2,1,3,2,5};
    findUniques(arr);
    return 0;
}