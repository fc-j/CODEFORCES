#include <iostream>
#include <string>
using namespace std;

int main() {
    string cad;
    char c; 
    int cnt=0, a; 
    cin>>a;
    for(int i=0; i<a; i++){
        cin >>c;
        cad.push_back(c); 
    }
    for(int i =0,j=i+1; j <a; i++, j++){
        if (cad.at(i)==cad.at(j)){
            cnt++; 
        }
    }
    cout<<cnt; 
    return 0;
}
