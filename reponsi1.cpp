#include <iostream>

using namespace std;

int main(){
    int nilai[5];
    int x;

    cout << "Masukkan nilai: " << endl;
    for(x=0;x<5;x++){
        cout << "Nilai angka: ";
        cin >> nilai[x];
    }

    cout << endl << "Membaca Nilai" << endl;
    for(x=0;x<5;x++){
        int *ptr = &nilai[x];
        cout << "Nilai angka: " << *ptr << endl;
    }
    return 0;
}