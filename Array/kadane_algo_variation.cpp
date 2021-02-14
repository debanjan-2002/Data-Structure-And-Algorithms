#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int arr_A[n];
	int arr_B[m];
	for(int i=0;i<n;i++){
		cin>>arr_A[i];
	}
	for(int i=0;i<m;i++){
		cin>>arr_B[i];
	}
	int max_end=0;
	int max_so_far=0;
	for(int i=0;i<n;i++){
		max_end+=arr_A[i];
		if(max_end<0){
			max_end=0;
		}
		else{
			bool check=true;
			for(int j=0;j<m;j++){
				if(arr_A[i]==arr_B[j]){
					check=false;
					max_end=0;
					break;
				}
			}
			if(check){
				if(max_end>max_so_far){
					max_so_far=max_end;
				}
			}

		}
	}
	cout<<max_so_far;

}