#include<iostream>
using namespace std;

int main(){
    int n, left, right,lopen = 0, lclose = 0, ropen = 0, rclose = 0, ans = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>left>>right;
        if(left == 1){
            lopen += 1;
        }
        else if (left == 0){
            lclose += 1;
        }
        if (right == 1){
            ropen += 1;
        }
        else if (right == 0){
            rclose += 1;
        }
    }
    // For left doors
    if (lopen>lclose){
        ans += lclose;
    }
    else{
        ans += lopen;
    }
    // For right doors
    if (ropen>rclose){
        ans += rclose;
    }
    else{
        ans += ropen;
    }
    cout<<ans<<endl;
}