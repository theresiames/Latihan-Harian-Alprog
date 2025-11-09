/*
Nama   : Theresia Monica E. S.
NPM    : 140810250062

Nama Program      : Pencarian Bilangan Prima
Deskripsi         : Menampilkan deret bilangan prima dari 1 sampai n
Tanggal Pembuatan : 7 November 2025
Durasi Pembuatan  : 15 menit 21 detik
*/

#include <iostream>
using namespace std; 


int main(){
    int n;
    cin >> n;

    cout << "1 ";

    for (int i = 2; i <= n; i ++){
        bool isPrime = true;

        for (int j = 2; j * j <= i; j++){
            if (i % j == 0){
                isPrime = false;
                break;
            }
         }

        if (isPrime) {
            cout << i << " ";
        }
    }
    cout << endl;
}