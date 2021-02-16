#include<bits/stdc++.h>
using namespace std;

int main(){
    int XOR=0;
    vector <int> input{1,3,2,7,3,1,2,5};
    for(int i=0;i<input.size();i++){
        XOR=XOR^input[i];
    }
    XOR = XOR & (~(XOR-1));
    int res1=0;
    int res2=0;
    for(int i=0;i<input.size();i++){
        if((input[i]&XOR)==0)
            res1=res1^input[i];
        else
            res2=res2^input[i];
    }
    cout<<res1<<" "<<res2<<"\n";
}