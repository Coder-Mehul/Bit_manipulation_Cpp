#include<iostream> 
#include<vector>
using namespace std;

int binarySearch(vector<int> arr , int l , int r, int x){
        if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;
 

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}

int main(){
    vector <int> arr= {1,4,16,18,20,21,28,29};
    int res= binarySearch(arr ,0 , arr.size()-1,200);

    if(res==-1){
        cout<<"Element Not Found!!!!";
    }
    else{
        cout << "Element found at index: " <<res;
    }
}