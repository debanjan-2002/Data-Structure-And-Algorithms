#include<bits/stdc++.h>
using namespace std;

/* Algorithm-
 1. Find the maximum element of the given array.
 2. Make an array(here vector) of size 'max+1' and initialize all elements as 0.
 3. Traverse the given array and for every element, increment increment the corresponding 
    index in the new array.
    Ex- Given array- [5,3,9,1,4,1]
        New array- [0,2,0,1,1,1,0,0,0,1] 
        The element from the given array acts as the index of new array.
 4. Now traverse the new array, and apply condition
        if(element >0) -> update the elements in the given array by the index of 
                          the element variable.
                          Decrement element by 1.
        if(element==0) -> Move to the next element of the new array.
 5. Finally return the original array and print the elements using loop

 */

//Function for finding the maximum element
int max_element(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int* count_sort(int arr[],int n,int max){
    vector <int> temp(max+1,0);
    for(int i=0;i<n;i++){
        temp[arr[i]]++;
    }
    int i=0;
    int j=0;
    while(i<temp.size()){
        if(temp[i]>0){
            arr[j]=i;
            temp[i]--;
            j++;
        }
        else{
            i++;
        }
    }
    return arr;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=max_element(arr,n);        //Contains maximum element
    int* ans=count_sort(arr,n,max);    //Contains the sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}