#include <bits/stdc++.h>
using namespace std; 
int main() {
    int a=0, b=0; 
    bool f=false; 
    cin >>a; 
    for(int i =0; i< a; i ++){
        cin>>b; 
        if(b ==1){
            f=true; 
        }
    }
    cout<<(f? "HARD": "EASY"); 
            
            
    return 0;
}