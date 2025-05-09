#include <bits/stdc++.h>
using namespace std; 
int main() {
    vector  <string> vec1; 
    int t=0, a=0, b=0,c=0; 
    cin >>t;
    while (t--)
    {
        vector <int> vec; 
        cin >>a>>b>>c; 
        vec.push_back(a); 
        vec.push_back(b); 
        vec.push_back(c); 
        
        sort(vec.begin(), vec.end()); 

        if(vec[0]+vec[1]==vec[2]){
            vec1.push_back("YES"); 
        }else{
            vec1.push_back("NO"); 
        }

    }
    for( string cad : vec1){
        cout<<cad<<endl; 
    }
      
    return 0;
}