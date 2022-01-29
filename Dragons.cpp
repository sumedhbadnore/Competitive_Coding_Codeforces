#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int s,n;
    bool flag = true;
    cin>>s>>n;
    pair<int, int> arr[1000];
    for(int i=0; i<n; i++){
        cin>>arr[i].first>>arr[i].second;
    }
   
    sort(arr, arr+n);
    for(int i=0;i<n;i++){
		
		if(arr[i].first>=s){
			flag = false;
			continue;
		}
		s=s+arr[i].second;
	}
	if(flag){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
		}
}