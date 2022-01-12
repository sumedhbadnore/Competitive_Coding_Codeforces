#include <iostream>
using namespace std;
int main(){
    int n, t;
    string seq;
    cin>>n>>t>>seq;
    while (t--){
        for (int i=0; i<n; i++){
            if (seq[i] == 'B' && seq[i+1] == 'G'){
                seq[i] = 'G';
                seq[i+1] = 'B';
                i = i+1;
            }
        }
    }
    cout<<seq;
}