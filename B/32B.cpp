#include <bits/stdc++.h>
using namespace std; 
int main() {
    vector<int>vec; 
    string cad;cin >>cad; 
   
    int len =cad.length();
    for(int i =0; i <len; ++i){
        if(cad.at(i)=='-'&&cad.at(i+1)=='.'){
            vec.push_back(1); 
            ++i; 
        }
        else if(cad.at(i)=='-'&&cad.at(i+1)=='-'){
            vec.push_back(2); 
            ++i; 
        }
        else{
            vec.push_back(0); 
        }

    }
    for(int i : vec){
        cout<<i; 
    }
    return 0;
}