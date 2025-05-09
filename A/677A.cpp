#include <bits/stdc++.h>
using namespace std; 
int main() {
    int x=0, cnt=0;
    int a,b; cin>>a>>b; 
    for(int i=0; i <a ;i++){
        cin>>x;
        if(x>b){
            cnt+=2;
        }else{
            cnt++; 
        }
    }
    cout<<cnt; 
            
            
    return 0;
}