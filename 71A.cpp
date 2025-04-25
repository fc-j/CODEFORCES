#include<iostream>
#include<vector>
using namespace std; 

void longWords(string cad){
    int len=cad.length();
    if (len>10){
        cout<<cad.at(0)<<len-2<<cad.at(len-1); 
    }
    else{
        cout<<cad; 
    }
}
int main(){
    string cad; 
    int n=0;
    vector<string>vec; 
    cin>>n; 
    for (int i =0; i <n; i++){

        cin>>cad; 
        vec.push_back(cad); 

    } 

    for(string c: vec){
        longWords(c);
        cout<<endl; 
    }
}