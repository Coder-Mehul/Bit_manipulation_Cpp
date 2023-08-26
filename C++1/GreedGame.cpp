#include <iostream> 
#include <vector> 
using namespace std;

bool isPossible(vector<int> arr , int n , int val , int k){
    int perm=0;
    int cur_sum=0;
    for(int i:arr){
        if(cur_sum+ i>=val){
            perm+=1 ;
            cur_sum=0;
        }
        else
        cur_sum+=i;
    }
    return perm>=k;
}

int main(){
    vector<int> arr={10,20,30,40,50,60,70,80,90,100};
    int n=4;
    int k=6;
    int sum=0;
    for(int i:arr){
        sum+=i;
    }
    int r=sum;
    int l=0;
    int ans;
    while(l<=r){
        int mid=(l+r)/2;
        if(isPossible(arr,n,mid,k)){
            l=mid+1;
            ans=mid;
            
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans<<endl;
    
}