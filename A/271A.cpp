#include <iostream>
using namespace std;
bool notRepetitiveDigit(int a){
    int x=0; 
    bool numeros[10]={false}; 
    while(a>0){
        x=a%10; 
        if(numeros[x]){
            return false; 
        }
        numeros[x]=true; 
        a/=10; 
        

    }
    return true; 
} 
int main() {
    int a; 
    int x=0; 

    cin>>a; 
    int cont=1; 
    while(true){
        if(notRepetitiveDigit(a+cont)){
            cout<<a+cont; 
            break;
        }
        cont++;
    }

}