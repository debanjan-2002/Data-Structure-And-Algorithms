#include<iostream>
using namespace std;
//WRONG INCOMPLETE...
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    int arr_rot[m][n];
    int col_start=0;
    int col_end=m-1;
    int row_start=0;
    int row_end=n-1;
    int row,col=0;
    while(row<=m && col<=n){
        for(int i=col_start;i<=col_end;i++){
            for(int j=row_end;j>=row_start;j--){
                arr_rot[row][col]=arr[i][j];
                col++;
            }
            row++;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr_rot[i][j]<<' ';
        }
        cout<<endl;
    }
}