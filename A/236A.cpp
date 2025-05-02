#include <bits/stdc++.h>
using namespace std; 
int main() {
    set<int>set; 
    string cad; 
    getline(cin,cad);                
    for(int i =0; i<cad.length(); i++){
        set.insert(cad.at(i)-'0'); 

    }
    int len =size(set); 
    if(len%2==0){
        cout<<"CHAT WITH HER!"; 
    }
    else cout<<"IGNORE HIM!"; 
    return 0; 
}