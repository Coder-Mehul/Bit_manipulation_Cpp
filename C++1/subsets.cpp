#include<iostream>
#include<cstring>
using namespace std;

void overLay(char arr[], int i){
    int j=0;
    while(i>0){
        int last_bit = i&1;
        if(last_bit){
            cout<<arr[j];
        }
        j++;
        i=i>>1;
    }
    cout<<endl;
}
void gen(char arr[]){
    int n =strlen(arr);
    for(int i=0;i<(1<<n);i++){
        overLay(arr ,i);
    }
    return;

}
int main(){
    char str[1000];
    cin>>str;
    gen(str);
}