#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,4,4,3,1};
    // Odd occuring element is 2
    // We use XOR for this
    /* Properties - 
       1) x ^ x = 0
       2) x ^ 0 = x
    */
    int ans=0;
    int size= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    cout<<ans<<"\n";
}