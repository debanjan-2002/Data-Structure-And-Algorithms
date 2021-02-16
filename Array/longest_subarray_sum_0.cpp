#include<bits/stdc++.h>
using namespace std;

int maxLen(vector <int> arr){
    int sum=0;
    int ans=0;
    map <int,int> repeat;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum==0){
            ans=max(ans,i+1);
        }
        else{
            if(repeat.count(sum)==0){
                repeat.insert({sum,i});
            }
            else{
                auto it=repeat.find(sum);
                ans=max(ans,i-(it->second));
            }
        }
    }
    return ans;
}

int main(){
    vector <int> input{15,-2,2,-8,1,7,10,23};
    int ans=maxLen(input);
    cout<<ans<<"\n";
}