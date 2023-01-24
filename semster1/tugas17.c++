#include <iostream>
using namespace  std;

int main(){
    float i,bil,rata2,jmlh=0,n,max=0;

    cout<< "masukan jumlah Bilangan : ";cin>>n;

    for(i=1;i<=n;i++) 
    {
        cout<< "jumlah bilangan ke-"<<i<<' ';cin>>bil;
        jmlh+=bil;

        if(bil>max)
        {
            max=bil;        
        }
    }

    rata2=jmlh/n;
    cout<< "total = "<< jmlh<<endl;
    cout << "Rata-rata = "<< rata2<<endl;
    cout << "Bilangan Terbesar = "<< max<<endl;

    return 0;
}
