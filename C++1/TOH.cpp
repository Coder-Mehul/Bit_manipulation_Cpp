#include <iostream>
using namespace std;

int  helper(int n, char fr , char ar , char tr){
    static int a=0;
    if(n==0){
        
        return 0;
    }
    
    helper(n-1 ,fr , tr , ar);
    a=a+1;
    cout<<"Transfer rod " <<" " <<n<<" "<<"from rod " <<" "<< fr <<" "<< "to rod " <<" "<<tr << endl;
    
    helper(n-1, ar ,fr , tr);
    return a;
    
    

    

}

int main(){
    int n;
    cin>>n;
    cout<<helper(n , 'A' , 'B' , 'C');
}