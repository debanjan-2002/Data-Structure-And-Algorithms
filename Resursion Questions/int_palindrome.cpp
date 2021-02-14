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
    int n;
    cin>>n;
    string s=to_string(n);   // to_string function.
    bool ans=palindrome(s);
    if(ans)
    cout<<n<<" is a palindrome integer"<<endl;
    else
    {
        cout<<n<<" is not a palindrome integer"<<endl;
    }
    
}