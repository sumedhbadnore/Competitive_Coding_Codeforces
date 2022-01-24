#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n, m, ans = 0;
    cin>>n>>m;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    for(int i=0; i<m; i++){
        if(arr[i] <= 0){
            ans += abs(arr[i]);
        }
    }
    cout<<ans<<endl;
    return 0;
}
