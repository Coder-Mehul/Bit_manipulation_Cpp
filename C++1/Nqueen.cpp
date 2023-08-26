#include <iostream>
# include <vector>

using namespace std;

void print_board(int n,char board[][20]){
        for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
           if(board[i][j]=='Q')
            cout << "Q ";
           else cout<<". ";
        printf("\n");
    }
}

bool isSafe(char board[][20],int n , int i , int j){
    for(int k=i;k>=0;k--){
        if(board[k][j]=='Q'){
            return false;
        }
    }
    int temp1=i;
    int temp2=j;

    while(temp1>=0 && temp2>=0){
        if(board[temp1][temp2]=='Q'){
            return false;
        }
        temp1--; temp2--;
    }

    temp1=i;
    temp2=j;
    while(temp1>=0 && temp2<n){
        if(board[temp1][temp2]=='Q'){
            return false;
        }
        temp1--;temp2++;
    }
    return true;

}

bool place(char board [][20] , int n , int i){
    if(i==n){
        print_board(n,board);
        return true;
    }

    for(int j=0;j<n;j++){

        if(isSafe(board,n , i ,j)){
            board[i][j]='Q';
            bool success = place(board , n ,i+1);
            if(success) return true;
            board[i][j]='.';
        }
        
        

    }
    return false;
}



int main(){
    char board [20][20]={'.'};


    int n;
    cin>>n;
    place(board , n ,0);
}