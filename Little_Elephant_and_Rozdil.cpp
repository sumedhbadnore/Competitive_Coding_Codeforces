#include<iostream>
using namespace std;

int main(){
    int n, inp, pos, count=1, min=1000000001;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>inp;
        if(inp < min){
            min = inp;
            pos = i;
            count = 1;
        }
        else if (inp == min){
            count +=1;
        }
    }
    if (count == 1){
        cout<<pos+1<<endl;
    }
    else{
        cout<<"Still Rozdil"<<endl;
    }
}