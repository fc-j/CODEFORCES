#include <iostream>
using namespace std; 
int main() {
    int x=0; 
    int n =0;cin>>n; 
    for(int i =0; i<n; i++){
        int t=0; 
        int a, b, c; cin>>a>>b>>c;      
        if(a==1){
            t++; 
        }if(b==1){
            t++;
        }
        if(c==1){
            t++;
        }
        x =(t>=2) ? ++x : x=x;   
    }
    cout<<x; 
    return 0;  
 
}