# include <iostream>
using namespace std;

// int getithBit(int x , int i){
//     int mask=(1<<i);

//     return (x & mask)>0 ? 1:0;
// }

// int clearithBit(int &x , int i){
//     int mask= ~(1<<i);
//     x=x & mask;

// }
// int setithBit(int &x , int i){
//     int mask= (1<<i);
//     x=x|mask;

// }
// int updateithBit(int &x , int i , int v){
//     clearithBit(x , i);
//     int mask= (v<<i);
//     x= x|mask;
// }
// int LastiBitsclear(int &x , int i){
//     int mask= (~0)<<i;

//     x= mask & x;
// }
int clearBitsFromiToj(int &x , int j , int i){
    int a= (~0)<<j+1;
    int b= (1<<i)-1;
    int mask = a | b;

    x= mask & x;
}

int main(){
    int x;
    cin>>x;
    int j;
    cin>>j;
    int i;
    cin>>i;
    
    clearBitsFromiToj(x , j ,i);
    cout<<x;

    
    
    
    
    
    
    // int v;
    // cin >> v;
    // updateithBit(x , i , v);
    // cout<<x;
    



    // cout<< getithBit(x,i) << endl;
    return 0;
}