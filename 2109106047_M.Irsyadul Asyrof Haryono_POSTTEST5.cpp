#include <iostream>
using namespace std;

// Deklarasi struct
struct databioskop
{
    string nama;
    int kursi;
    char hari[5];
};

// Deklarasi array struct
databioskop bioskop[5];

void tambahdata(int jml);
void tampildata(int jml);
void ubahdata(int indx);
void hapusdata(int indx, int jml);
void bubbleSort(databioskop arr[], int jml);

int main()
{
    int jml, index, ask;

    do
    {
        cout << "==== MENU ====";
        cout << endl << "1. Tambah ";
        cout << "\n2. Tampilkan data";
        cout << "\n3. Ubah data";
        cout << "\n4. Hapus data";
        cout << "\n5. Bubble sort";
        cout << "\n6. Keluar";
        cout << "\nMasukkan pilihan: ";
        cin >> ask;

        switch(ask)
        {
        case 1:
            cout << endl;
            cout << "Jumlah inputan: ";
            cin >> jml;
            tambahdata(jml);
            break;
        case 2:
            cout << endl;
            tampildata(jml);
            break;
        case 3:
            cout << endl;
            cout << "Masukkan index yg ingin diubah: ";
            cin >> index;
            ubahdata(index);
            break;
        case 4:
            cout << endl;
            cout << "Index data yang ingin dihapus: ";
            cin >> index;
            hapusdata(index, jml);
            break;
        case 5:
            bubbleSort(bioskop, jml);
            break;
        case 6:
            return 0;
        }
    }while(ask!=6);
}


// Tambah data menggunakan for loop sesuai inputan user
void tambahdata(int jml)
{
    int i;

    for(i=0;i<jml;i++)
    {
        cin.ignore(1, '\n');
        cout << "Nama: ";
        getline(cin, bioskop[i].nama);
        cout << "No Kursi: ";
        cin >> bioskop[i].kursi;
        cout << "Hari: ";
        cin >> bioskop[i].hari;
        cout << endl;
    }
}

// Menampilkan data sebanyak jumlah data
void tampildata(int jml)
{
    int i;

    for(i=0;i<jml;i++)
    {
        cout << "Nama: " << bioskop[i].nama;
        cout << endl << "No Kursi: " << bioskop[i].kursi;
        cout << endl << "Hari: " << bioskop[i].hari;
        cout << endl;
    }
}

// Ubah data berdasarkan index
void ubahdata(int indx)
{
    cin.ignore(1, '\n');
    cout << "Nama: ";
    getline(cin, bioskop[indx].nama);
    cout << "No kursi: ";
    cin >> bioskop[indx].kursi;
    cout << "Hari: ";
    cin >> bioskop[indx].hari;
}

// Menghapus data dengan mengubah isi data menjadi data selanjutnya
void hapusdata(int indx, int jml)
{
    int y, i;

    y = indx-1;
    jml--;

    for(i=y;i<jml;i++)
    {
        bioskop[i] = bioskop[i+1];
    }
    cout << "\nData Berhasil Dihapus";
}

void bubbleSort(databioskop arr[], int jml)
{
    bool didSwap;
    databioskop temp;

    do
    {
        didSwap = false;

        for(int i = 0; i < jml-1; i++)
        {
            if(arr[i].nama > arr[i+1].nama)
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                didSwap = true;
            }
        }
    }while(didSwap);
}