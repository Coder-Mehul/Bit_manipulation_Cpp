#include<bits/stdc++.h>
using namespace std;

void helper(string &s , int l , int r){
    if(l==r) {
        
        cout <<s <<endl;
        
    }
    for(int i=l;i<=r;i++){
        swap(s[l], s[i]);

        helper(s,l+1,r);
        swap(s[l],s[i]);
    }

}

int main(){
    string s;
    cin>>s;
    helper(s , 0 , s.length()-1);
    
}