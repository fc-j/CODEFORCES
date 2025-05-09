#include <bits/stdc++.h>
using namespace std; 
int main() {
    string c; 
    int a=0, cnt1=0, cnt2=0;
    cin>>a; 
    cin.ignore(); 
    getline(cin, c); 
    for(int i=0; i<a; i++){
         switch (c.at(i))
         {
         case 'D':
            cnt1++; 
            break;
         case 'A':
            cnt2++;
            break; 
         
         default:
            break;
         }    
    }
    if(cnt1>cnt2){
        cout<<"Danik"; 
    }
    else if(cnt1<cnt2){
        cout<<"Anton";
    }else
        cout<<"Friendship";
            
            
    return 0;
}