#include<iostream>
using namespace std;

// Given 'n' , Print n to 1 and then 1 to n
void dec_inc(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    dec_inc(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    cout<<endl;
    dec_inc(n);
}