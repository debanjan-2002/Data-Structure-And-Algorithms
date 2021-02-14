// Count the number of vowels & consonents in a string using recursion
#include<bits/stdc++.h>
using namespace std;

int vowels(string s,int ans){
    string temp="aeiouAEIOU";
    if(s.length()==0){
        return ans;
    }
    for(int i=0;i<temp.length();i++){
        if(s[0]==temp[i]){
            ans+=1;
            break; 
        }
    }
    return vowels(s.substr(1),ans);
    
}

int main(){
    string s="aeiouo";
    int res=vowels(s,0);
    cout<<"Number of Vowels : "<<res<<endl;
    cout<<"Number of consonents : "<<s.length()-res<<endl;

}