#include<iostream>
using namespace std;
//incomplete...
int main(){
    int n;
    cout<<" Enter number of elements : ";
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count+=1;
            }
        }
        cout<<arr[i]<<"-->"<<count<<endl;
        
        
    }
}