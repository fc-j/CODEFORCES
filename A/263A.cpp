#include<iostream>
using namespace std; 
int main (){
    int cont =0; 
    int arr[5][5]={}; 
    for (int i=0; i <5; i++){
    
        for(int j=0; j < 5; j++){
            cin>>arr[i][j]; 
        }
    }
    for (int i=0; i <5; i++){
    
        for(int j=0; j < 5; j++){
            if(arr[i][j]==1){
                if(i>2){
                    cont+=i-2; 
                }
                else {
                    cont+=2-i; 
                } 
                if(j>2){
                     cont+=j-2;      
                }
                else{
                    cont +=2-j; 
                }
            }

        }
    }

    cout<<cont; 
}