#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, count0 = 0; 
    double count5 = 0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        int value;
        cin>>value;
        arr[i] = value;
        if (value == 0){
            count0 ++;
        }
        else {
            count5 += 1;
        }
    }

    count5 = floor(count5/9)*9;
    
    if (count0 == 0){
        cout<<-1<<endl;
    }
    else if (count5 == 0){
        cout<<0<<endl;
    }
    else{
        for(int i=0; i<count5; i++){
            cout<<5;
        }
        for(int i=0; i<count0; i++){
            cout<<0;
        }
    }

}