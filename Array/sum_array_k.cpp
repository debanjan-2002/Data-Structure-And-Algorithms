// Finding elements from an array which sums to an integer k
//complete.....
#include<iostream>
using namespace std;

bool sum(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    while(s<e){
        if(arr[s]+arr[e]==k){
            cout<<arr[s]<<' '<<arr[e]<<endl;
            return true;
        }
        else if(arr[s]+arr[e]<k){
            s++;
        }
        else{
            e--;
        }
    }
    return false;
}
int main(){
    //Array declaration
    int n;
    cout<<"Enter no of elements : ";
    cin>>n;
    int arr[n];
    int k;
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value to find the sum for : ";
    cin>>k;
    
    //Sorting the array
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<sum(arr,n,k);
    return 0;
}