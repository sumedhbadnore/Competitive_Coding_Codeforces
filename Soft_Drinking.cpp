#include<iostream>
using namespace std;

int main(){
    int ans,nfrie, kbott, lmili, clime, dslice, psalt, nl, np, tdrink, tlime, tsalt;
    cin>>nfrie>>kbott>>lmili>>clime>>dslice>>psalt>>nl>>np;
    tdrink = (kbott * lmili)/nl;
    tlime = (clime * dslice);
    tsalt = psalt/np;
    if(tdrink <= tlime && tdrink <= tsalt){
        ans = tdrink/nfrie;
    }
    else if(tlime <= tdrink && tlime <= tsalt){
        ans = tlime/nfrie;
    }
    else{
        ans = tsalt/nfrie;
    } 
    cout<<ans<<endl;
}