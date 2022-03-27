#include <iostream>
using namespace std;

double faktorial(double n){
    double r = 1;
    for(double i = 2; i <= n; i++){
        r*=i;
    }
    return r;
}

double kombinasi(double n, double r){
    return faktorial(n)/(faktorial(n-r)*faktorial(r));
}

double permutasi(double n, double r){
    return faktorial(n)/(faktorial(n-r));
}

int main(){
    double n, r;
    int pil;
    string ulang;

    do{
    cout << "MENU" << endl;
    cout << "1. Kombinasi\n2.Permutasi" << endl;
    cout << "Masukkan pilihan: ";
    cin >> pil;
    cout << "Masukkan nilai n: ";
    cin >> n;
    cout << "Masukkan nilai r: ";
    cin >> r;

    switch(pil){
        case 1: if (n > r){
            cout << "Hasil kombinasi: " << kombinasi(n, r);
        }else if(n == r){
            cout << "Hasil kombinasi adalah 1";
        }else{
            cout << "Nilai N harus lebih besar dari R";
        }
        break;
        
        case 2: if(n >= r){
            cout << "Hasil permutasi: " << permutasi(n, r);
        }else{
            cout << "N harus lebih besar/sama dengan R";
        }
        break;

        default:
            cout << "PILIHAN TIDAK TERSEDIA!";
    }

    cout << "\nApakah anda ingin keluar? y/n: ";
    cin >> ulang;
    cout << endl;
    }while(ulang != "y");

    cout << "TELAH KELUAR DARI PROGRAM";
    return 0;
}