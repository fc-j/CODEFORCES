#include <bits/stdc++.h>
using namespace std; 
int main (){
    int n=0, mins,suma; 
    cin>>n>>mins; 
    int pr=0;
    int cnt=0; 
    for(int i =1; i<=n;i++){
         cnt+=(5*i);
         suma=mins+cnt; 
        if(suma>240){
            break;
        }

        pr++;
    }
    cout<<pr; 
}