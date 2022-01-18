#include<iostream>
using namespace std;

int main(){
    int n, count = 0;
    string inp;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>inp;
        if(inp[1] == 43){
            count += 1;
        }
        if(inp[1] == 45){
            count -= 1;
        }
    }
    cout<<count<<endl;
}