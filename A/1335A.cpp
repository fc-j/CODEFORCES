#include<bits/stdc++.h>
using namespace std;
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	vector <int>vec; 

	long long  d=0, b=0;
	cin >>d; 
	while(d--){
		cin>>b;
		if((b&1)==0){
			vec.push_back((b-1)/2);
		}else{
			vec.push_back(b/2); 
		} 
	}	
	for(int i : vec){
		cout << i<<endl; 
	}
	return 0;
}