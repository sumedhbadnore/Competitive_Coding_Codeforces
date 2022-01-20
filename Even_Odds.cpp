#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long k, ans;
    double n;
    cin>>n>>k;
    if(k <= ceil(n/2)){
        ans = k*2 - 1;
    }
    else if(k > n/2){
        k = k - ceil(n/2);
        ans = k*2;
    }
    cout<<ans<<endl;
}