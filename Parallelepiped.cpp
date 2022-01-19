#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a1, a2, a3, count = 0, s1, s2, s3;
    cin>>a1>>a2>>a3;
    s1 = sqrt((a1*a2)/a3);
    s2 = sqrt((a2*a3)/a1);
    s3 = sqrt((a3*a1)/a2);

    count += (s1+s2+s3)*4;
    cout<<count<<endl;
}