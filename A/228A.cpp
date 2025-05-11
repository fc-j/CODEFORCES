#include <bits/stdc++.h>
using namespace std; 
int main() {
    vector <int> vec(4);
    int a =4;
    set<int>s; 
    for(int i =0; i<a;i++)
    {
        cin>>vec[i]; 
    }
    for(int i : vec){
        s.insert(i); 
    }
    int len=s.size(); 
    cout<<4-len; 
            
    return 0;
}