#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s){
    if(s.length()==0){
        return true;
    }
    if(s[0]==s[s.length()-1]){
        return palindrome(s.substr(1,s.length()-2));
    }
    return false;
}

int main(){
    string s;
    cin>>s;
    bool ans=palindrome(s);
    if(ans)
    cout<<s<<" is palindrome"<<endl;
    else
    {
        cout<<s<<" is not palindrome"<<endl;
    }
    
}
