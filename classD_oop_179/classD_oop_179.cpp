#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {
		cout << "NIM= " << nim;
		cout << "\nNama= " << nama;
	}
};

class MataKuliah {
private:
	int sks;
	string kode;
	string namaMK;

public:
	void inputMK() {

		cout << "\nMasukan Jumlah SKS= ";
		cin >> sks;
		cout << "\Masukan kode MK= ";
		cin >> kode;
		cout << "\nMasukan nama MK= ";
		cin >> namaMK;
}

	void tampilMK() {
		cout << "\nJumlah SKS= " << sks;
		cout << "\Kode MK= " << kode;
		cout << "\nNama MK= " << namaMK << endl;
	}
};
