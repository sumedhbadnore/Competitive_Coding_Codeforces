#include<iostream>
using namespace std;

int main(){
    string s;
    bool flag = false;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i] == s[i+1] && s[i] == s[i+2] && s[i] == s[i+3] && s[i] == s[i+4] && s[i] == s[i+5] && s[i] == s[i+6]){
            flag = true;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}