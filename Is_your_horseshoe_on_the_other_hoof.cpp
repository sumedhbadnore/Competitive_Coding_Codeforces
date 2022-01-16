#include<iostream>
using namespace std;

int main(){
    int a, b, c, d, buy = 0;
    cin >> a >> b >> c >> d;
    if (a == b || a == c || a == d){
        buy += 1;
    }
    if ( b == c || b == d){
        buy += 1;
    }
    if (c == d){
        buy += 1;
    }
    cout<<buy<<endl;
}