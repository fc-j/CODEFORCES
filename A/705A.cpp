#include <bits/stdc++.h>
using namespace std; 
int main() {
    int a =0; cin>>a;     
    string cad2="I hate"; 
    string cad1="I love"; 
    for(int i =0; i <a; i++){
       if(i%2==0){
            cout<<"I hate"; 
       }
       else{
            cout<<"I love"; 
       }
       if(i==a-1){
        cout<<" it "; 
       }else{
        cout<<" that ";
       }
    }
            
    return 0;
}