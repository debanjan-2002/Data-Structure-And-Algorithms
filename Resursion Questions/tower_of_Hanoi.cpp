//Tower of Hanoi Problem
#include<iostream>
#include<string>
using namespace std;

void toh(int n,int a,int b,int c){
    if(n==0){
        return;
    }
    toh(n-1,a,c,b);
    cout<<n<<" ( "<<a<<" -> "<<b<<" ) "<<endl;
    toh(n-1,c,b,a);
}
int main(){
    // No. of towers
    int n=3;

    // Tower nos
    int a=10;  //arbitary
    int b=11;  //arbitary
    int c=12;  //arbitary

    toh(n,a,b,c);
}

