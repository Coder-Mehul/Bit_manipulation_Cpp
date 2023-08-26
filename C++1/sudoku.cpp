#include<iostream>
#include<vector>
using namespace std;


bool isSafe(int arr[][9], int k , int i , int j , int n){
    for(int a=0;a<n;a++){
        if(arr[i][a]==k || arr[a][j]==k){
            return false;
        }
    }

    int sr=(i/3)*3;
    int sc=(j/3)*3;

    for(int l=sr;l<sr+3;l++){
        for(int m=sc;m<sc+3;m++){
            if(arr[l][m]==k){
                return false;
            }
        }
    }
    return true;
}

bool place(int arr [] [9], int i ,int j, int n){
    if(i==n){
        for(int l=0;l<9;l++){
            for(int m=0;m<9;m++){
                cout<<arr[l][m] << " ";
            }
            cout<<endl;
        }
        return true;
    }

    if(j==n){
        place(arr , i+1 , 0 , n);
    }
    if(arr[i][j]!=0){
        place(arr , i , j+ 1 , n);
    }
    else{
        for(int k=1;k<=9;k++){
            if(isSafe(arr , k , i , j, n)){
                arr[i][j]=k;
                bool success= place(arr , i , j+1 , n);
                if(success){
                    return true;
                }
                else{
                    arr[i][j]=0;
                }
            }
        }
    }
    return false;
}

int main(){
    int  arr [9][9]={
  {5, 3, 0, 0, 7, 0, 0, 0, 0},
  {6, 0, 0, 1, 9, 5, 0, 0, 0},
  {0, 9, 8, 0, 0, 0, 0, 6, 0},
  {8, 0, 0, 0, 6, 0, 0, 0, 3},
  {4, 0, 0, 8, 0, 3, 0, 0, 1},
  {7, 0, 0, 0, 2, 0, 0, 0, 6},
  {0, 6, 0, 0, 0, 0, 2, 8, 0},
  {0, 0, 0, 4, 1, 9, 0, 0, 5},
  {0, 0, 0, 0, 8, 0, 0, 7, 9}
};
    place(arr ,0 , 0 ,9 );
}



