#include<bits/stdc++.h>
using namespace std;

void permutations(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string left=s.substr(0,i);
        string right=s.substr(i+1);
        string rest=left+right;
        permutations(rest,ans+ch);
    }
}

int main(){
    string s;
    cin>>s;
    cout<<"\n";
    permutations(s,"");
}