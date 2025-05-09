#include <bits/stdc++.h>
using namespace std; 
int main() {
    int a =0; 
    int t=0, s=0, cnt =0;  
    cin>>t; 
    for(int i =0; i<t; i++){
      cin>>a; 
        if(a>0){
            s+=a; 
        }
        else{
            if(s>0){
                s--; 
            }else{
                cnt++;
            }
        }
    }
    cout<<cnt; 
    return 0;
}