//Count the no. of occurence of an element in an array

#include<bits/stdc++.h>
using namespace std;

int occ(vector <int> arr,int idx,int val){

    if(idx==arr.size()){
        return 0;
    }
    int sum=occ(arr,idx+1,val);
    if(arr[idx]==val){
        return sum+1;
    }
    return sum;    
}

int main(){
    vector <int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        arr.push_back(input);
    }
    int k;
    cin>>k;
    int ans=occ(arr,0,k);
    cout<<ans;
}
