#include <iostream>
using namespace std;

int main () {
    float angka1, angka2, angka3;

    cout<<"Masukkan angka pertama: ";
    cin>>angka1;
    cout<<"Masukkan angka Kedua: ";
    cin>>angka2;
    cout<<"Masukkan angka ketiga: ";
    cin>>angka3;

    float terbesar=angka1;

    if (angka2>terbesar){
        terbesar=angka2;
    }
    if (angka3>terbesar){
        terbesar=angka3;
    }

    cout<<"Angka terbesar adalah: "<<terbesar<<endl;

    return 0;
}
