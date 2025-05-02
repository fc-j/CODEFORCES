#include <bits/stdc++.h>
using namespace std; 
int main() {
    string cad; 
    char c; 
    int a=0, t=0; 
    cin >>a>>t>>cad; 
    while(t--){
        for(int i =0; i<a-1; i++){
            if(cad.at(i)=='B'&& cad.at(i+1)=='G'){
                swap(cad.at(i), cad.at(i+1)); 
                ++i; 
            }
        }
        
    }
            
    cout<<cad; 
    return 0;
}