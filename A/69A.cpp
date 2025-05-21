#include <bits/stdc++.h>
using namespace std; 
int main (){
    int x=0, y=0, z=0; 
    int a=0, b=0, c=0; 
    int j; cin >>j; 
    
    for(int i =0; i< j; i++){

        cin>>a>>b>>c; 
        x+=a;  
        y+=b;  
        z+=c;  

    }
    if(x==0&&y==0&&z==0){
        cout<<"YES"; 
    }else{
        cout<<"NO"; 
        
    }
        
}