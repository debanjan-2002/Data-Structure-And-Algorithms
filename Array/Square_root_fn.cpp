#include<iostream>
using namespace std;

float sqrt(int n,int p){
    float ans;
    int mid;
    int s=0,e=n;
    while(s<=e){
        mid=(s+e)/2;
        if(mid*mid==n){
            ans=mid;
            break;
        }
        else if(mid*mid<n){
            s=mid+1;
            ans=mid;
        }
        else{
            e=mid-1;
        }
    }
    float inc=0.1;
    for(int i=0;i<p;i++){
        while(ans*ans<=n){
            ans+=inc;     
        }
        ans-=inc;
        inc=inc/10;
    }
    return ans;
}
int main(){
    int n,p;
    cout<<"Enter number : ";
    cin>>n;
    cout<<"Enter precision : ";
    cin>>p;
    cout<<sqrt(n,p);
    return 0;
}