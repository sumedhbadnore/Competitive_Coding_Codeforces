#include<iostream>
using namespace std;

int main(){
    int n, enter, exit, passengers = 0, max = -1;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>exit>>enter;
        passengers = passengers - exit;
        passengers += enter;
        if(passengers > max){
            max = passengers;
        }
    }
    cout<<max<<endl;
}
