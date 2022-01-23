#include<iostream>
using namespace std;

int main(){
    long long int i;
    string s;
    bool yes = true;
    cin>>s;
    for(i=0; i<s.length();){
        if(s[i] == '1' && s[i+1] == '4' && s[i+2] == '4'){
            i += 3;
        }
        else if(s[i] == '1' && s[i+1] == '4'){
            i += 2;
        }
        else if(s[i] == '1'){
            i++;
        }
        else{
            yes = false;
            cout<<"NO"<<endl;
            break;
        }
    }
    if(yes){
        cout<<"YES"<<endl;
    }
}