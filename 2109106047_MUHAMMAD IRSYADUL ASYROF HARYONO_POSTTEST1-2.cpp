#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    //Deklarasi Variabel
    float numOne, numTwo, res;
    int choice;
    do
    {
        //Output pilihan
        cout<<"1. Penjumlahan\n";
        cout<<"2. Pengurangan\n";
        cout<<"3. Perkalian\n";
        cout<<"4. Pembagian\n";
        cout<<"5. Modulus\n";
        cout<<"6. Exit\n\n";
        cout<<"Enter Your Choice(1-6): ";
        cin>>choice;
        if(choice>=1 && choice<=5)
        {
            cout<<"\nMasukkan 2 angka: ";
            cin>>numOne>>numTwo;
        }
        //Fungsi switch yang berjalan berdasarkan inputan variable choice
        switch(choice)
        {
            case 1:
                res = numOne+numTwo;
                cout<<"\nHasil = "<<res;
                break;
            case 2:
                res = numOne-numTwo;
                cout<<"\nHasil = "<<res;
                break;
            case 3:
                res = numOne*numTwo;
                cout<<"\nHasil = "<<res;
                break;
            case 4:
                res = numOne/numTwo;
                cout<<"\nHasil = "<<res;
                break;
            case 5:
                //Untuk modulus menggunakan fungsi fmod karena di C++ modulus tidak bisa menggunakan float
                res = fmod(numOne, numTwo);
                cout<<"\nHasil = "<<res;
                break;
            case 6:
                return 0;
            default:
                cout<<"\nPilihan tidak tersedia";
                break;
        }
        cout<<"\n------------------------\n";
    }while(choice!=6);
    cout<<endl;
    return 0;
}