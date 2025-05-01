#include <bits/stdc++.h>
using namespace std; 
int main() {
    
    int a=3,b =2; 
    int x=0, y=0; 
    int cnt=1; 
    cin>>x>>y; 
    while(true){
        if(x*a>y*b){
            cout<<cnt; 
            break;
        }else{
            x*=a; 
            y*=b; 
            cnt++; 
        }
    }
            
            
    return 0;
}