#include<bits/stdc++.h>
using namespace std;

void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
void wave_sort(int arr[],int n){
    for(int i=1;i<=n-2;i+=2){
        if(arr[i]>arr[i-1]){
            swap(arr[i],arr[i-1]);
        }
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){

}

