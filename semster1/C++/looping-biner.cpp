#include <iostream>
using namespace std;

int main()
{
    int a[10],n,i;
    cout << "masukan angka desiman" << endl;
    cin >> n;

    while (n>255)
        {
            cout << "Maksimal Decimal yang bisa di input adalah 255 \n";
        }
    for(i = 0; n>0;i+=1){
        a[i]= n%2;
        n=n/2;
    }

    cout << "angka biner nya adalah" << endl;
    for(i=i-1;i>=0;i--){
        cout<<a[i];
    }
    
    cout<<'\n';

    return 0;
}

