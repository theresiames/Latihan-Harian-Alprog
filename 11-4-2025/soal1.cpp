/*
Nama   : Theresia Monica E. S.
NPM    : 140810250062

Nama Program      : Surat
Deskripsi         : Program untuk mengirimkan surat
Tanggal Pembuatan : 4 November 2025
Durasi Pembuatan  : 38 menit 26 detik
*/

#include <iostream>
#include <string>
using namespace std;

struct Alamat{
    string alamat;
};

struct IsiSurat{
    string isi;
    string tempat_penulisan;
    string tanggal_penulisan;
};

struct Surat {
    string nama_penerima;
    string nama_pengirim;
    string nomor_telepon_penerima;
    string nomor_telepon_pengirim;
    Alamat alamat;
    IsiSurat isi_surat;
};

Surat inputSurat(){
    Surat s;

    getline (cin, s.nama_penerima);
    getline (cin, s.nama_pengirim);
    getline (cin, s.nomor_telepon_penerima);
    getline (cin, s.nomor_telepon_pengirim);

    getline (cin, s.alamat.alamat);

    getline (cin, s.isi_surat.isi);
    getline (cin, s.isi_surat.tempat_penulisan);
    getline (cin, s.isi_surat.tanggal_penulisan);
    
    return s;
}

void outputSurat(Surat s){
    cout << "Nama Penerima Surat : " << s.nama_penerima << endl;
    cout << "Nama Pengirim Surat : " << s.nama_pengirim << endl;
    cout << "Nomor Telepon Penerima Surat : " << s.nomor_telepon_penerima << endl;
    cout << "Nomor Telepon Pengirim Surat : " << s.nomor_telepon_pengirim << endl;
    cout << "Alamat Tujuan Surat: " << s.alamat.alamat << endl;
    cout << "Surat :" << endl;
    cout << "  Isi Surat: " << s.isi_surat.isi << endl;
    cout << "  Tempat Penulisan: " << s.isi_surat.tempat_penulisan << endl;
    cout << "  Tanggal Penulisan: " << s.isi_surat.tanggal_penulisan << endl;
}

int main(){
    Surat surat = inputSurat();
    outputSurat(surat);   
}
