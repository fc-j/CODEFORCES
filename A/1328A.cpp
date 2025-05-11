#include <bits/stdc++.h>
using namespace std; 
int dvv(int a, int b){
    if(a%b==0){
        return 0; 
    }
    else{
        int x= b*((a/b)+1); 
        return x-a; 
    }
}
int main() {
    vector<int>vec; 
    int b=0, c=0; 
    int a =0;cin >>a; 
    for(int i =0; i<a; i ++){
        cin >>b>>c ;
        vec.push_back(dvv(b,c)); 

    }
    for( int i :vec){
        cout<<i<<endl; 

    }
}