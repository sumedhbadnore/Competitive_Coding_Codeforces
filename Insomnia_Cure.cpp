#include<iostream>
using namespace std;

int main(){
    int k,l,m,n,d,count = 0,ans;
    cin>>k>>l>>m>>n>>d;
    for(int i=1; i<=d; i++){
        if (i%k == 0){
            continue;
        }
        else if (i%l == 0){
            continue;
        }
        else if (i%m == 0){
            continue;
        }
        else if (i%n == 0){
            continue;
        }
        else{
            count += 1;
        }
    }
    ans = d - count;
    cout<<ans<<endl;
}