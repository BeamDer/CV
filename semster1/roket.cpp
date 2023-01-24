#include <iostream>
using namespace std;

int main()
{
    float i,bnsn,tot_bensin,per_km,jarak=0,jumlah=0;
    
    bnsn = 10;
    
    for(i=100;i>=jarak;i--){
    	cout<<"Km ke-"<<i<<":\n\tbensin terbuang :"<< bnsn<< endl;
    	per_km=0.8;
    	bnsn*=per_km;
	jumlah+=bnsn;
    }

    cout<<"Total bensin yang di habiskan: "<<jumlah<<"Liter"<<endl;
    return 0;
}
