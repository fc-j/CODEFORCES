#include <bits/stdc++.h>
using namespace std; 
int main (){

    vector <int>vec; 
    int b=0, cnt=0;


    for(int i =0; i <3;i++){
        cin>>b; 
        vec.push_back(b); 
    }
    sort(vec.begin(), vec.end()); 
    cnt+=vec[1]-vec[0];
    cnt+=vec[2]-vec[1];

    cout<<cnt; 
}