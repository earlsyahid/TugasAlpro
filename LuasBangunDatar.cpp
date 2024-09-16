#include <iostream>
using namespace std;

int main(){
    int pilihan;
    float panjang, lebar, sisi, alas, tinggi, luas;

    cout<<"Pilih bangun datar yang akan dihitung luasnya"<<endl;
    cout<<"1. Persegi"<<endl;
    cout<<"2. Persegi Panjang"<<endl;
    cout<<"3. Segitiga"<<endl;
    cout<<"Masukkan pilihan (1-3): ";
    cin>>pilihan;

    switch(pilihan){
        case 1:
            cout<<"Masukkan panjang sisi: ";
            cin>>sisi;
            luas=sisi*sisi;
            cout<<"Luas Persegi adalah "<<luas<<endl;
            break;

            case 2:
            cout<<"Masukkan panjang: ";
            cin>>panjang;
            cout<<"Masukkan lebar: ";
            cin>>lebar;
            luas=panjang*lebar;
            cout<<"Luas Persegi panjang adalah "<<luas<<endl;
            break;

            case 3:
            cout<<"Masukkan alas: ";
            cin>>alas;
            cout<<"Masukkan tinggi: ";
            cin>>tinggi;
            luas=0.5*alas*tinggi;
            cout<<"Luas Segitiga adalah "<<luas<<endl;
            break;

            default:
                cout<<"Pilihan tidak valid."<<endl;
                break;
    }

    return 0;

}
