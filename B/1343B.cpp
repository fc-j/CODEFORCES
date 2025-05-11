#include <bits/stdc++.h>
using namespace std; 
void ptr(int a ){
    int smp=0, smi=0; 
    if( a%4!=0){
        cout<<"NO"<<endl; 
    }else{
        cout<<"YES"<<endl; 
        for(int  j=1; j<=a/2; j++){
            cout <<2*j<<" "; 
            smp+=2*j; 
        }
        for(int i =0; i<(a/2)-1; i++){
            cout<<(2*i)+1<<" ";
            smi+= (2*i)+1; 
        }
        cout<<smp-smi<<endl; 
    }
}


int main() {
    vector<int> vec; 
    int b=0; 
   int a =0; cin >>a; 
   while(a--){
    cin>>b; 
    vec.push_back(b); 
   }
   for(int i  : vec ){
        ptr(i); 
   }
    return 0;
}