#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n, s, ans, max=0;
    double req;
    cin>>n>>s;
    for(int i=1; i<=n; i++){
        cin>>req;
        if(ceil(req/s) >= max){
           ans = i;
           max = ceil(req/s);
        }
    }
    cout<<ans<<endl;
}