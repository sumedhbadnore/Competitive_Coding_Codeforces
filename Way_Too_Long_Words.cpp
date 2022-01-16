#include<iostream>
using namespace std;

int main(){
    int n;
    string var;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>var;
        if(var.length() > 10){
            cout<<var[0]<<var.length()-2<<var[var.length()-1]<<endl;
        }
        else{
            cout<<var<<endl;
        }
    }
}