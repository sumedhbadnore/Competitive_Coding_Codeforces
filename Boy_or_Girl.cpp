#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int len, count = 0;
    string inp;
    cin>>inp;
    sort(inp.begin(), inp.end());
    len = inp.length();
    for (int i=0; i<len; i++){
        if (inp[i] == inp[i+1]){
            count += 1;
        }
    }
    if ((len - count)%2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}