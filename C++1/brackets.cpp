#include<bits/stdc++.h>
using namespace std;


                                            // Same strings nhi generate hongi
                                            // O(2^n) Not advisable
vector<string> ans;
bool isvalid(string s){
    stack<char> st;
        
        for(char c: s){
            if(st.empty()){
                st.push(c);
            }
            else if((st.top()=='(' && c==')')){
                st.pop();
            }
            else{

            st.push(c);
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }

unordered_set<string> stt;
void helper(string &s , int l , int r){
    if(l==r) {
        
            if(isvalid(s)){
                stt.insert(s);
                
                
                
            
        }
        
    }
    for(int i=l;i<=r;i++){
        swap(s[l], s[i]);

        helper(s,l+1,r);
        swap(s[l],s[i]);
    }

}

int main(){
    string s="()()()";
    
    helper(s , 0 , s.length()-1);
    for(string a:stt){
        cout<<a<<endl;
    }

    
}