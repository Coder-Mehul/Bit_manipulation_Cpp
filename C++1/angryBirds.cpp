#include <iostream>
#include <bits/stdc++.h>

using namespace std;
bool canPlace(vector<int> arr , int val , int b){
    int birds=1;
    int cur=arr[0];

    for(int i=1;i<arr.size();i++){
        if(arr[i]-cur >= val){
            birds++;
            cur=arr[i];
        }
        if(birds==b){
            return true;
        }
    }
    return false;
}

int main(){
    int b=4;
    vector <int > arr = {1,3,6,8,9,24,23,18,12,26,39};
    sort(arr.begin(),arr.end());
    
    int l=0;
    int r=arr[arr.size()-1]-arr[0];
    int ans=-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(canPlace(arr , mid , b)){
            ans=max(ans,mid);
            l=mid+1;
        }
        else{
            r=mid -1;
        }
    }
    cout << ans <<endl;

    
}