#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y' || s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' || s[i] == 'y'){
            ;
        }
        else if(s[i] < 97){
            s[i] += 32;
            cout<<"."<<s[i];
        }
        else{
            cout<<"."<<s[i];  
        } 
    }
}