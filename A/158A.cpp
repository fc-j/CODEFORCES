#include <bits/stdc++.h>
using namespace std; 
int main() {
    vector<int>vec;
    int b=0; 
    int a=0, c=0; 
    cin>>a>>c;
    while(a--){
        cin>>b; 
        vec.push_back(b);


    }
    int cnt =0; 
    int flg=vec[c-1];
        
    for(int i : vec){
        if(i>=flg && i>0){
            cnt++; 

        }
        
    } 
    cout<<cnt; 

    return 0;
}