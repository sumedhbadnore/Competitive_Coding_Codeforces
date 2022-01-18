#include<iostream>
#include<map>
using namespace std;

int main(){
    long long int narr, value, nque, query, vcount = 0, pcount = 0;
    map<int, int> m; 
    cin>>narr;
    for(int i=0; i<narr; i++){
        cin>>value;
        m[value] = i;
    }
    cin>>nque;
    for(int i=0; i<nque; i++){
        cin>>query;
        vcount += m[query]+1;
        pcount += narr - m[query];
    }
    cout<<vcount<<" "<<pcount<<endl;
}