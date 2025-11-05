/*
Nama   : Theresia Monica E. S.
NPM    : 140810250062

Nama Program      : Rekap Tur Konser
Deskripsi         : Program yang dapat mengurutkan kota-kota 
                    berdasarkan persentase kehadiran tertinggi
Tanggal Pembuatan : 5 November 2025
Durasi Pembuatan  : 29 menit 54 detik
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Konser {
    string kota;
    int tiket_terjual;
    int kapasitas;
    double persentase;
};

int main(){
    int n;
    cin >> n;

    Konser k[100];

    for(int i = 0; i < n; i ++){
        cin >> k[i].kota >> k[i].tiket_terjual >> k[i].kapasitas;
        k[i].persentase = (double) k[i].tiket_terjual/k[i].kapasitas *100;
    }

    for(int i = 0; i < n; i ++){        
        for(int j = 0; j < n-1; j++){
            if(k[j].persentase < k[j+1].persentase){
                Konser temp = k[j];
                k[j] = k[j+1];
                k[j+1] = temp;
            }
        }
    }

    cout << fixed << setprecision(2);

    for (int i = 0; i < n; i++){
        cout << k[i].persentase << " " << k[i].kota << endl;
    }
}
