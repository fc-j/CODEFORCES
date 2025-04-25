#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 
int main() {
    vector <int>c; 
    string cad; 
    getline(cin, cad); 
    int len =cad.length();
    for(int i =0; i <len; i++){
        if (cad.at(i)>=48 && cad.at(i)<=57  ){
                c.push_back(cad.at(i)-'0'); 
        }
    }          
    sort(c.begin(), c.end()); 
    for(int i =0; i<c.size(); i++){
        cout<<c[i];
        if(i!=c.size()-1){
            cout<<'+'; 
        } 
    }
    cout<<endl; 
    return 0;
}