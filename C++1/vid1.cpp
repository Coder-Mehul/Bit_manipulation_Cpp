#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// void updateArray(int arr[] , int i , int val){
//     arr[i]=val;
// }
// int main(){
//     int arr[] = {1,2,3,4,5,6};

//     int n= sizeof(arr)/sizeof(int);
//     updateArray(arr , 1 ,24);
//     cout << arr;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<< "\n";
//     }
    
// }
// void updateArr(array<int , 6> &arr,int i , int val){
//     arr[i]=val;
// }

// int main(){
//     array <int ,6> arr = {1,2,3,4,5,6};
//     updateArr(arr , 4,100);

//     for(int i=0;i<arr.size();i++){
//         cout << arr[i] << "\n";
//     }

//     array<int , 8> zeroes;
//     zeroes.fill(0);

//     for(int i=0;i<zeroes.size();i++){
//         cout<<zeroes[i]<<" ";
//     }

// }

int main(){
    vector<int> first;
    vector<int> second(4,20);
    vector <int> third(second);

    int numbers [] ={1,2,3,4,5};
    vector<int> fourth(numbers,numbers+sizeof(numbers)/sizeof(int));

    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    first.push_back(4);
    first.push_back(5);
}