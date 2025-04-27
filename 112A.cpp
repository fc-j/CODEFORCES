#include <iostream>
#include <cctype>
using namespace std; 
int main() {
    int len=0, t=0; 
    string cad1, cad2; 
    cin>>cad1; cin>>cad2;
    len=cad2.length(); 
    
    for(int i =0; i <len; i++){
        cad1.at(i)=tolower(cad1.at(i)); 
        cad2.at(i)=tolower(cad2.at(i)); 
    }
    
    
      if(cad1==cad2){
        cout<<0; 
    } else{

        if(cad2<cad1){
            cout<<1; 
        }else{
            cout<<-1; 
        }

    }


    return 0;
}