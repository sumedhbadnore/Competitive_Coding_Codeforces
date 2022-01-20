#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, min = 1000, pos, pos2;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if (abs(arr[i] - arr[i+1]) < min){
            min = abs(arr[i] - arr[i+1]);
            pos = i;
            pos2 = i+1;
        }
    }

    if(abs(arr[n-1] - arr[0]) < min){
        pos = 0;
        pos2 = n-1;
        cout<<pos2+1<<" "<<pos+1<<endl;
    }
    else{
        cout<<pos+1<<" "<<pos2+1<<endl;
    }
}