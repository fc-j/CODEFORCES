#include <bits/stdc++.h>
using namespace std; 
int main(){
    vector<int> vec;  
    int t=0;
    int a ,b, c,d; 
    cin>>t; 
    while (t--)
    {
        int cnt=0; 
        cin>>a>>b>>c>>d; 
        if(b>a){
            cnt++; 
        }
        if(c>a){
            cnt++; 
        }if(d>a){
            cnt++; 
        }
        vec.push_back(cnt); 
    }
    for(int i : vec){
        cout<<i<<endl; 
    }
    


}