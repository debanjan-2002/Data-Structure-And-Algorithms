#include<iostream>
using namespace std;

int main(){
    int arr[]={2,4,3,6,1,4,1,4,1};
    int new_arr[9]={0};
    for(int i=0;i<9;i++){
        int temp=arr[i];
        new_arr[temp-1]++;
    }
    int max=0;
    int element;
    for(int i=0;i<9;i++){
        if(new_arr[i]>=max){
            max=new_arr[i];
            element=i+1;
        }
    }
    cout<<"Element is "<<element<<" with max frequency "<<max;

}