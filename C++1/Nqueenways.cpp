#include <iostream>
# include <vector>


 //This Prints the number of ways the N-queen can be solved ans all possible combinations if u remove the commented part of place that calls for print_board...!!!!!!!




using namespace std;
void print_board(int n,int board[][20]){
    cout<<endl<<endl<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout <<board [i][j] <<" ";
        }
        cout<<endl;

    }
}

bool isSafe(int board[][20],int n , int i , int j){
    for(int k=i;k>=0;k--){
        if(board[k][j]){
            return false;
        }
    }
    int temp1=i;
    int temp2=j;

    while(temp1>=0 && temp2>=0){
        if(board[temp1][temp2]){
            return false;
        }
        temp1--; temp2--;
    }

    temp1=i;
    temp2=j;
    while(temp1>=0 && temp2<n){
        if(board[temp1][temp2]){
            return false;
        }
        temp1--;temp2++;
    }
    return true;

}

int place(int board [][20] , int n , int i){
    if(i==n){
        // print_board(n , board);
        return 1;
    }
    int ways=0;

    for(int j=0;j<n;j++){

        if(isSafe(board,n , i ,j)){
            board[i][j]=1;
            
            ways+=place(board , n ,i+1);
            
            board[i][j]=0;
            
        }
        

    }
    return ways;
}



int main(){
    int board [20][20]={0};


    int n;
    cin>>n;
    cout << "ways: " <<place(board , n ,0);
}