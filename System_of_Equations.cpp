#include<iostream>
using namespace std;

int main(){
    int n, m, count(0);
    cin>>n>>m;
    for(int a=0; a*a<=n; a++){
        int b = n - a*a;
        if(a + b*b == m && a*a + b == n){
            count ++;
        }
    }
    cout<<count<<endl;
    return 0;
}