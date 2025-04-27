#include <iostream>
#include <string>
using namespace std;

int main() {
    string cad;
    char c; 
    int cont=0, a; 
    cin >>a; 
    for (int i = 0; i < a; i++) {
        cin>>c; 
        cad.push_back(c); 
    }

    for(int i =0;i <a; i++){
       for(int j=i+1; j<a; j++){
            cout<<cad.at(i)<<" "<<cad.at(j)<<endl;   
        /*  if(cad.at(i)==cad.at(j)){
                cont++; 
            } */    
       }
    }
    cout<<cont; 
    return 0;
}
