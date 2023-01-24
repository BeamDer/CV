#include <iostream>
using namespace std;

int main(){
    int sisi = 10;
    
    while(true){
        for(int i = 1; i<sisi;i++){
            if(i<sisi){
                cout<< "+"+i<<endl;
            }
            else if(i==sisi){
                break;
            }
        }
    }
    

    return 0;
}