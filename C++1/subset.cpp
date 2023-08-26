#include <iostream> 
#include <vector>
using namespace std;

vector <vector<int>> ans;
void helper(vector <int> &arr , int n ,vector<int> &temp){
    
    if(n==arr.size()){
        ans.push_back(temp);
        return;
    }
    
    temp.push_back(arr[n]);

    helper(arr , n+1, temp);
    temp.pop_back();
    helper(arr , n+1 ,temp);

    
}


int main(){
    vector<int> arr= {1,2,3};
    vector <int> temp;
    
    
    helper(arr , 0 ,  temp);
    for(int a = 0; a < ans.size(); a++)
  {
    for(int b = 0; b < ans[a].size(); b++)
    {
      cout << ans[a][b] << " ";
    }
    cout<<endl;
  } 
   return 0;
    
}