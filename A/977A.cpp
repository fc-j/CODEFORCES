#include <bits/stdc++.h>
using namespace std; 
int main() {
    long long a, b;cin >>a>>b;
    

    for(int i =0; i <b; i++){
        if(a%10==0){
            a=a/10; 
        }else{
            --a; 
        }
    } 

    cout<<a; 
            
            
    return 0;
}