#include<bits/stdc++.h>
using namespace std;

int max(int a,int b,int c){
    if(a>b){
        if(a>c)
            return a;
        else
            return c;
    }
    else if(b>c){
        if(b>a)
            return b;
        else    
            return a;
    }
    else{
        if(c>b)
            return c;
        else
            return b;
    }
}

int maxPieces(int n,int a,int b,int c){
    if(n==0)
        return 0;
    if(n<0)
        return -1;
    int res = max(maxPieces(n-a,a,b,c),maxPieces(n-b,a,b,c),maxPieces(n-c,a,b,c));
    if(res==-1)
        return -1;
    return res+1;
}

int main(){
    int n=5,a=4,b=2,c=6;
    int ans = maxPieces(n,a,b,c);
    cout<<ans<<endl;
}