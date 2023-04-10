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

int main() {
	Mahasiswa mhs;
	MataKuliah mk;

	cout << "\nMasukan NIM= ";
	cin >> mhs.nim;
	cout << "\nMasukan Nama= ";
	cin >> mhs.nama;

	mk.inputMK();
	mhs.tampil();
	cout << endl;
	mk.tampilMK();

	system("pause");

};
