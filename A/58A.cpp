#include<bits/stdc++.h>
using namespace std; 
int main (){
    int cn=0; 
    string s, cad="hello"; 
    getline(cin, s); 
    for(int i =0; i <s.length();i++){
        if(cad[cn]==s[i]){
            cn++; 
        }else{

        }
    }
    if(cn>=cad.length()){
        cout<<"YES"; 
    }else{
        cout<<"NO"; 
    }
}