#include <iostream>
#include <vector>
using namespace std; 
int main() {
    vector<string>c; 
    string cad; 
    int n=0,x=0; cin>>n; 
    for(int i =0; i <n; i++){
        cin>>cad;  
        c.push_back(cad); 
    }
    for(string d : c){
        if(d.at(1)=='+'){
            x++; 
        }
        else{
            x--;
        }
    }
    cout<<x;     
            
    return 0;
}