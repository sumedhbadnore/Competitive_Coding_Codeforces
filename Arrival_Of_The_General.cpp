#include <iostream>
using namespace std;

int main(){
    int n, min = 1011, max = 0, temp, mini, maxi, steps=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>temp;
        if(temp > max){
            max = temp;
            maxi = i;
        }
        if(temp <= min){
            min = temp;
            mini = i;
        }
    }
    if (mini < maxi){
        steps = n - mini + maxi - 2;
    }
    else{
    steps = n - mini + maxi - 1;
    }
    cout<<steps;
}

