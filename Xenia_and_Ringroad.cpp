#include<iostream>
using namespace std;

int main(){
    long long int n, t, count = 0,current = 1;
    cin>>n>>t;
    for(int i=0; i<t; i++){
        long long int next;
        cin>>next;
        if(next - current > 0){
            count = count + (next - current);
            current = next;
        }
        else if(next - current < 0){
            count += n - abs(next - current);
            current = next;
        }
        else if(next == current){
            ;
        }
    }
    cout<<count<<endl;
}