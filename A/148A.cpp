#include <bits/stdc++.h>
using namespace std; 
int main() {
    int cnt=0; 
    int a=0, b=0, c=0, d=0,e=0; 
    cin>>a>>b>>c>>d>>e; 
    for (int i =1; i <=e; i ++){
        if((i%a==0)||(i%b==0)||(i%c==0)||(i%d==0)){
            cnt++; 
        }
    }
            
    cout<<cnt; 
            
    return 0;
}