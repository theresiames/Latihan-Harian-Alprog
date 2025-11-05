/*
Nama   : Theresia Monica E. S.
NPM    : 140810250062

Nama Program      : Jarak Titik Koordinat
Deskripsi         : Program untuk menghitung jarak antara dua titik
                    koordinat dengan bantuan struct dan pointer
Tanggal Pembuatan : 3 November 2025
Durasi Pembuatan  : 27 menit 16 detik
*/


#include <iostream>
#include <iomanip>
using namespace std;

struct Titik {
    int x, y;
};

float akar(float n){
    float x = n;

    for (int i = 0; i < 20; i++){
        x = 0.5 * (x + n/x);
    }

    return x;
}

int main (){
    Titik a, b;
    Titik *pa = &a, *pb = &b;
    cin >> (*pa).x >> (*pa).y >> (*pb).x >> (*pb).y;

    int dx = (*pb).x - (*pa).x ;
    int dy = (*pb).y - (*pa).y;
  
    float jarak = akar(dx*dx + dy*dy);
   
    cout << fixed << setprecision(2) << jarak << endl;
}
