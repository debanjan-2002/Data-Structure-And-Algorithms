#include<bits/stdc++.h>
using namespace std;

// Application of Brian Kernighan
/* We know if a number is a power of two then it will have only 1 bit set in
   it's binary representation. We know doing n&(n-1) turns off the last set bit.
   And if as per condition there is only 1 set bit,then n&(n-1) will make the number
   0. Hence, we get the result.
*/

bool ispow2(int n){
    return (n!=0) && ((n&(n-1))==0);
}

int main(){
    int input=8;
    cout<<ispow2(input)<<"\n";
}