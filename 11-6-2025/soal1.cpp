/*
Nama   : Theresia Monica E. S.
NPM    : 140810250062

Nama Program      : Bubble Sort
Deskripsi         : Mengurutkan angka dari yang terkecil hingga terbesar
Tanggal Pembuatan : 6 November 2025
Durasi Pembuatan  : 19 menit 48 detik
*/

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "\nUkuran array: ";
    cin >> n;

    int arr[n];
    cout << "Input array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl;
}
