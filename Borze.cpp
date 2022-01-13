#include <iostream>
#include <string>
using namespace std;

int main(){
    int ans = 0;
    string inp;
    cin>>inp;
    for (int i = 0; i < inp.length(); i++){
        if (inp[i] == '.'){
            cout<<0;
        }
        else if (inp[i] == '-'){
            if(inp[i+1] == '.'){
            cout<<1;    
            }
            else if(inp[i+1] == '-'){
                cout<<2;
            }
            i++;  
        }
    }
}

