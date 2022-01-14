#include <iostream>
using namespace std;

int main(){
    int n, count = 0;
    string stone;
    cin >> n >> stone;
    for(int i = 0; i<n; i++){
        if (stone[i] == stone[i+1]){
            count += 1;
    }
    }
    cout<<count;
}

