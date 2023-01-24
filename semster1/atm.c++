#include <iostream>
using namespace std;

int main(){

    int saldo_awal = 200000 , pin_input , tarik  , setor , kode , kode_pin , percobaan=0 ;
    char nama;
    
    cout << "Masukan nama -Initial- tolong 1 huruf saja: ";cin>>nama;
    cout << "Silahkan buat Pin anda: ";cin>> kode_pin;


    cout << "Silahkan masukkan pin anda : ";cin >> pin_input;
    
    if(kode_pin!=pin_input){
        for(int i=1;i<=3;i++){
            percobaan+=1;
            cout<<"percobaan ke-"<<percobaan<<"\n";
            if(percobaan <3){
                cout<<"masukan lagi pin anda: ";cin>>pin_input;
            }
        }
        cout<<"Akun diblokir\n\n";
    }
    else{

        menu :
        if (pin_input==kode_pin){
            cout << "\nSelamat Datang , "
                << nama << "\n\n";
            cout << "Pilihan Menu :\n";
            cout << "1. Tarik Tunai \n2. Setor Tunai \n3. Cek Saldo\n4. Transfer\n5. Top Up E-Wallet\n6. Keluar Program\n\n";
            cout << "Masukkan kode menu : " ; cin >> kode ;
            switch(kode){
            case 1 :
                tarik :
                cout<< "Tarik Tunai\n";
                cout << "Silahkan masukkan uang yang ingin anda ambil : " ; cin >> tarik;
                if (tarik%50000!=0 || tarik<0){
                    cout << "masukkan total uang dengan pecahan 50000\n";
                    
                    goto tarik;
                }
                else {
                    if (tarik > saldo_awal){
                        cout << "Saldo lu gak cukup njir :P\n";
                    }
                    else {
                    saldo_awal -= tarik;
                    cout << "Silahkan hitung kembali uang yang telah anda ambil :\n";
                    cout << "Total saldo anda sekarang , " << saldo_awal << endl;
                    }
                    
                    goto menu;
                }
            break;
            case 2 :
                setor :
                cout << "Setor Tunai\n";
                cout << "Silahkan masukkan uang yang ingin anda tabung : " ; cin >> setor;
                if (setor%50000!=0 || setor<0){
                    cout << "masukkan total uang dengan pecahan 50000\n";
                    
                    goto setor;
                }
                else {
                    saldo_awal += setor;
                    cout << "Total saldo anda sekarang , " << saldo_awal << endl;

                    goto menu;
                }
            break;
            case 3 :
                cout << "Cek Saldo\n";
                cout << "Total saldo anda sekarang , " << saldo_awal << endl;
                
                goto menu;
            break;
            case 4 :
                transfer :
                cout << "Transfer\n";
                cout << "Silahkan masukkan uang yang ingin anda kirim : " ; cin >> tarik;
                if (tarik%50000!=0 || tarik<0){
                    cout << "Minimal transfer adalah 50000\n";
                    
                    goto transfer;
                }
                else {
                    if (tarik > saldo_awal){
                        cout << "Saldo lu gak cukup njir :P\n";
                    }
                    else {
                        cout << "dana yang anda transferkan : "<<tarik<<endl;
                        saldo_awal -= tarik;
                        cout << "Total saldo anda sekarang , " << saldo_awal << endl;
                    }
                    
                    goto menu;
                }
            break;
            case 5:
                top_up:
                cout<< "Top Up E-Wallet";
                cout<< "Masukan Berapa banyak yang ingin di masukan ke dalam E-Wallet Min(50000) : ";cin >> tarik;
                if(tarik > saldo_awal){
                    cout<< "Setor Dulu lah :P\n";
                }
                else{
                    cout <<"dana yang di Top Up: "<< tarik;
                    saldo_awal-=tarik;
                    cout<< "Total saldo anda saat ini adalah: "<<saldo_awal;
                }
                goto top_up;

            break;
            case 6:
            cout<<"Terima Kasih BossQue\t\t\t\t:P:P:P:P:P"<<endl<<"Salam Hangat Bima ;(\n";
            break;
            default :
                cout << "\nKode yang anda pilih tidak ada\n\tyang bener bener aja lah :P\n";
                
                goto menu;
            break;
            }
        }
        else {
            cout << "Pin yang anda masukkan salah\n";
        }
    }
    

    return 0;
}
