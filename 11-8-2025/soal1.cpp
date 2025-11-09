/*
Nama   : Theresia Monica E. S.
NPM    : 140810250062

Nama Program      : Convert Temperature
Deskripsi         : Mengkonversi suhu dari suatu satuan ke dua satuan lainnya
Tanggal Pembuatan : 8 November 2025
Durasi Pembuatan  : 15 menit 21 detik
*/

#include <iostream>
using namespace std;

double toCelsius (double f){
    return (f - 32) * 5 / 9;
}

double toFahrenheit (double c){
    return (c * 9 / 5) + 32;
}

double toKelvin (double c){
    return c + 273.15;
}

double kelvinTocelsius (double k){
    return k - 273.15;
}

double kelvinTofahrenheit (double k){
    return (kelvinTocelsius(k) * 9 / 5) + 32;
}

int main (){
    double suhu;
    char jenis;
    cin >> suhu >> jenis;

    if (jenis == 'c') jenis = 'C';
    if (jenis == 'f') jenis = 'F'; 

    if (jenis == 'C'){
        cout << "Fahrenheit: " << toFahrenheit(suhu) << endl;
        cout << "Kelvin: " << toKelvin(suhu) << endl;
    } else if (jenis == 'F') {
        double c = toCelsius(suhu);
        cout << "Celsius: " << c << endl;
        cout << "Kelvin: " << toKelvin(c) << endl;
    } else if (jenis == 'K') {
        double c = kelvinTocelsius(suhu);
        cout << "Celsius: " << c << endl;
        cout << "Fahrenheit: " << kelvinTofahrenheit(suhu) << endl;
    }
}

