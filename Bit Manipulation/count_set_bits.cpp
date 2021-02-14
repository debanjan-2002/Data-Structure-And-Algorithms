#include<bits/stdc++.h>
using namespace std;

// Brian-Kernigham Algorithm
// Used for counting set bits
// Time Complexity - O(Number of set bits) 
int countSet(int n){
    int ans=0;
    while(n!=0){
        n=n&(n-1);
        ans++;
    }
    return ans;
}

int main(){
    int input;
    cin>>input;
    cout<<countSet(input)<<"\n";
}