#include <bits/stdc++.h>
using namespace std; 
int main() {
    vector <int>vec; 
    int len; 
    string c,b; 
    cin>>c; 
    cin>>b;
    len=c.length();
    for(int i =0; i <len; i++){
        if(c.at(i)==b.at(i)){
            vec.push_back(0); 
        }else{
            vec.push_back(1); 
        }
    } 
    for(int i : vec){
        cout<<i; 
    }
            
            
    return 0;
}