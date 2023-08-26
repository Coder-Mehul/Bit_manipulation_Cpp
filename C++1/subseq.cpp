#include <iostream>
#include <vector>

using namespace std;

void helper(int i , string n  , string s){

    if(i==n.length()){
        if(s==""){
            cout<<"NULL";
        }
        cout<<s <<endl;
        return ;

    }
    s= s+n[i];
    helper(i+1 , n , s);
    s.pop_back();
    helper(i+1 , n ,s);
}

int main(){
    string n;
    cin>>n;
    string s="";
    helper(0 , n , s);
}