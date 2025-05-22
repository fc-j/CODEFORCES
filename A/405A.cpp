#include<bits/stdc++.h>
using namespace std; 
int main(){
    int a=0, b=0;
    cin>>a; 
    vector <int> vec(a); 
    for(int i =0; i< a; i++){
        cin>>vec[i];
    }

    sort(vec.begin(),vec.end()); 
    for(int i:  vec){
        cout<<i<<" "; 
    }

} 