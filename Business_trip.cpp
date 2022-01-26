#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int k, n=12, count(0), sum(0);
    cin>>k;
    int arr[n];
    bool flag =false;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(k == 0){
        cout<<0<<endl;
    }
    else{
    sort(arr, arr+n);
    for (int i=0; i<n; i++){
        if(arr[n-i-1] >= k){
            count = 1;
            flag = true;
            break;
        }
        else if(arr[n-i-1] < k){
            sum += arr[n-i-1];
            count += 1;
            if(sum >= k){
                flag = true;
                break;
            }
        }
    }
    
    if(flag){
        cout<<count<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    }
}