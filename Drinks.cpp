#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, temp;
    double sum = 0, ans;

    cin >> n;
    for (int i=0; i<n; i++){
        cin>>temp;
        sum += temp;
    }
    sum = sum/100;
    ans = sum/n;
    ans = ans * 100;
    cout<<fixed<<setprecision(12)<<ans<<endl;
}