#include <bits/stdc++.h>
using namespace std; 
int main (){
    
    string s;
    getline(cin, s);
    for(int i=0;i<s.length(); i++){
        if((s.at(i)>=65 )&&(s.at(i)<=90)){
            s.at(i)=tolower(s.at(i)); 
        }
    }
    
    for(int i=0;i<s.length(); i++){
        switch (s.at(i))
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
            break;
        
        default:
            cout<<"."<<s.at(i); 

            break;
        }
    }

}