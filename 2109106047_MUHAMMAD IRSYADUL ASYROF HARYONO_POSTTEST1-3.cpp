#include <iostream>

using namespace std;

int main(){
    int pil, awal, akhir, i, sum = 0;
    string ulang;

    do{
        cout << "MENU" << endl;
        cout << "1. ANGKA GENAP" << endl;
        cout << "2. ANGKA GANJIL" << endl;
        cout << "-------------" << endl;
        cout << "MASUKKAN PILIHAN: ";
        cin >> pil;
        cout << "MASUKKAN ANGKA AWAL: ";
        cin >> awal;
        cout << "MASUKKAN ANGKA AKHIR: ";
        cin >> akhir;

        switch(pil){
            case 1 :
                for(i=awal; i<=akhir; i++){
                    if(i%2==0){
                        cout << i << " ";
                        sum = sum + i;
                    }
                }break;
            case 2 :
                for(i=awal; i<=akhir; i++){
                    if(i%2!=0){
                        cout << i << " ";
                        sum = sum + i;
                    }
                }break;
            default:
                cout << "PILIHAN TIDAK TERSEDIA!";
                break;
            }
        cout << "\nHASIL: " << sum;
        cout << "\nAPAKAH ANDA INGIN KELUAR? y/n: ";
        cin >> ulang;
        cout << endl;
        
    }while(ulang != "y");
    return 0;
}