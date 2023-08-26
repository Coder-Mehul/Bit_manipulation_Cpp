#include <iostream>
#include <climits>
#include <vector>
using namespace std;


int tsp(vector<vector<int>> dist , int setCities , int city , int n , vector<vector<int>> &dp){
    if(setCities == (1<<n)-1){
        return dist[city][0];
    }
    if(dp[setCities][city]!=-1){
        return dp[setCities][city];
    }
    int ans= INT_MAX;
    for(int choices=0;choices<n;choices++){
        if((setCities & (1<<choices)) == 0){
            int distance = dist[city][choices] + tsp(dist , setCities | (1<<choices) , choices , n,dp );
            ans = min(ans , distance);
        }
    }
    dp[setCities][city]=ans;
    return ans;
}

int main(){
    vector<vector<int>> dist = {
        {0,20,42,25},
        {20,0,30,34},
        {42,30,0,10},
        {25,34,10,0}
        };

        vector<vector<int>> dp ((1<<dist.size()) , vector<int> (dist.size(),-1));
    cout<<tsp(dist , 1, 0 , 4,dp )<< endl;
}