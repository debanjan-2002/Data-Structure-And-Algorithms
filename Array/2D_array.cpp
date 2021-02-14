#include<iostream>
using namespace std;

int main(){
    int n;
    int m;
    cout<<"Enter number of rows : ";
    cin>>n;
    cout<<"Enter number of columns : ";
    cin>>m;
    int arr[n][m];
    //input elements..
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    
    //printing the 2D array..
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<' ';
        }
    cout<<endl;
    }
    cout<<endl;

    //searching for element..

    int k;
    cout<<"Enter element to search : ";
    cin>>k;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==k){
                cout<<"Element Found !"<<endl;
                cout<<i+1<<' '<<j+1<<endl;;
                continue;
            }
        }
    }
    return 0;
}