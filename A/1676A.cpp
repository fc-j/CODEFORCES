#include <bits/stdc++.h>
using namespace std; 
int main() {
    int v=0; 
    vector <int> vec;
    vector <string>vec1; 
    int b=0,t=0; 
    int x =0; cin>>x; 
    t=x; 
    while (t--)
    {
        cin>>b; 
        vec.push_back(b); 
    }
    for(int j=0 ; j<x;j++){
        int sum1=0, sum2=0; 
        for(int i =0; i<3; i ++){
             sum1+= vec[j]%10;
             vec[j]/=10; 
        }
        for(int i =0; i<3; i ++){
             sum2+= vec[j]%10;
             vec[j]/=10;
        }
        if(sum1==sum2){
            vec1.push_back("YES"); 

        }else{
            vec1.push_back( "NO");
        }
    }
    for( string s: vec1){
        cout<<s<<endl; 
    }

    return 0;
}