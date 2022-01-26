#include<iostream>
using namespace std;

int main(){
    string s;
    int temp = 0;
    bool flag = false;
    cin>>s;
    for(int i=0; i<s.length();i++){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            i = i+2;
            if(flag && temp == 0){
                cout<<" ";
                temp = 1;
            }
            continue;
        }
        else{
           cout<<s[i]; 
           flag = true;
           temp = 0;
        }
    }
}