#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string guest,host,rand,temp="";
    cin>>guest>>host>>rand;
    temp = guest + host;
    sort(temp.begin(), temp.end());
    sort(rand.begin(), rand.end());
    if(temp == rand){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}