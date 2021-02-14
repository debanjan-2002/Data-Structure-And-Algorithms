#include<iostream>
using namespace std;

// Print elements of array in reverse order
void dec_arr(int arr[],int idx){  //idx =index
    if(idx==-1){
        return;
    }
    cout<<arr[idx]<<endl;
    dec_arr(arr,idx-1);
}

//Print elements of array in forwaard order
void asc_arr(int arr[],int idx,int n){  //n=size
    if(idx==n-1){
        return;
    }
    cout<<arr[idx]<<endl;
    asc_arr(arr,idx+1,n);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int idx=0;
    asc_arr(arr,idx,n);
}