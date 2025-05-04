#include <bits/stdc++.h>
using namespace std; 
int main() {

    int cnt=0; 
    long long aux=0, i =0;cin>>i; 
    while (true)
    {
        if(i>0){
            aux=i%10; 
            if(aux==4 ||aux==7){
                cnt++; 
            }
        
                i=i/10; 
            
        }
        else{
            break;
        }
        
    }
    if(cnt==4||cnt==7){
        cout<<"YES "; 

    }
    else{
        cout<<"NO";
    }
 

}