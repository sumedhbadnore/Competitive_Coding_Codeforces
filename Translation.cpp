#include<iostream>
#include<string>
using namespace std;

int main(){
    string s, temp, t;
    bool yes=true;
    cin>>s>>t;

    for(int i=0; i<t.length(); i++){
        temp += s[t.length()-1-i];
    }
    
    if(temp == t){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}