#include <bits/stdc++.h>
using namespace std; 
int main() {
    vector <int>vec; 

    int a,b=0; cin>>a; 
    
    for(int i =0; i <a; i ++){
        cin >>b; 
        vec.push_back(b); 
    }
    
    double suma=0, division; 
    for(int i : vec){
        suma+=i; 
    }
    division=suma/a; 
    cout<<fixed<<setprecision(12)<<division; 
            
    return 0;
}