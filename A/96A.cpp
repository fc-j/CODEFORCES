#include <bits/stdc++.h>
using namespace std; 
int main(){
    string s; 
    getline(cin,s); 
    int len =s.length();
    int cn=1; 
    for(int i=0,j=1; j <len; i++,j++){
        if(s[i]==s[j]){
            cn++; 
            if(cn>=7){
                cout<<"YES"; 
                return 0; 
            }
        }
        else{
            cn=1; 
        }
    }
    cout<<"NO"; 
    return 0; 


}