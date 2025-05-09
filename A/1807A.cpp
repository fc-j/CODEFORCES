#include <bits/stdc++.h>
using namespace std; 
int main (){
    vector <char> vec; 
    int t; cin >>t; 
    while (t--)
    {
        int a,b, c; cin>>a>>b>>c;
        if((a+b)==c){
            vec.push_back('+'); 
        }else{
            vec.push_back('-');
        }
        

    }   
    for(char c : vec){
        cout<<c<<endl; 
    }
    



}