/*
Nama   : Theresia Monica E. S.
NPM    : 140810250062

Nama Program      : Convert Temperature
Deskripsi         : Program untuk menghitung rata-rata (mean) dan 
                    nilai tengah (median) dari sekumpulan data
Tanggal Pembuatan : 9 November 2025
Durasi Pembuatan  : 26 menit 48 detik
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;

    double data[100];  

    for (int i = 0; i < N; i++) {
        cin >> data[i];
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (data[j] > data[j + 1]) {
                swap(data[j], data[j + 1]);
            }
        }
    }

    cout << "Data Terurut: [";
    for (int i = 0; i < N; i++) {
        cout << data[i];
        if (i < N - 1) {
            cout << ", ";
        } else {
            cout << "]";
        }
    }
    cout << endl;

    double sum = 0;
    for (int i = 0; i < N; i++) {
        sum += data[i];
    }
    cout << fixed << setprecision(2) << "Rata-rata (Mean): " << sum / N << endl;

    double median;
    if (N % 2 == 1) {
        median = data[N / 2];
    } else {
        median = (data[N / 2 - 1] + data[N / 2]) / 2;
    }
    cout << fixed << setprecision(1) << "Median: " << median << endl;
}