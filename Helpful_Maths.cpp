#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s, temp = "";
    cin >> s;
    if (s.length() == 1){
        cout<<s;
    }
    else{
        for (int i=0; i<s.length(); i++){
            if (s[i] != '+'){
                temp.push_back(s[i]);
            }
        }
        sort(temp.begin(), temp.end());
        for(int i=0; i<temp.length(); i++){
            if (i == 0){
                cout<<temp[i];
            }
            else
            cout<<'+'<<temp[i];
            }

    }

}