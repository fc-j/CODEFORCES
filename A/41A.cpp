#include <bits/stdc++.h>
using namespace std; 
int main() {
    string  s, t; 
    cin>>s>>t; 
    bool dif=false; 
    int len=t.length(); 
    char *ptr_ini=&s[0], *ptr_fini=&t[0]; 
    if(s.length()!=t.length()){
        dif=true; 
    }else{
        
        for(int i =0, j =len-1; i < len;i++, j--){
            if(*(ptr_ini+i)!=*(ptr_fini+j)){
                dif=true;            
            }
        } 

    }
    
    cout<<(dif? "NO": "YES");  
    return 0;
}