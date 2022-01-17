#include<iostream>
using namespace std;

int main(){
    string inp;
    bool flag = false;
    cin>>inp;
    for (int i=0; i<inp.length(); i++){
        if(inp[i] >= 33 && inp[i] <= 126){
            if(inp[i] == 72 || inp[i] == 81 || inp[i] == 57){
                flag = true;
            }
        }
    }
    if (flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}