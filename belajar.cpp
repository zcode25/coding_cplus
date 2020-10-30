#include <iostream>
using namespace std;

int main() {

	// definisi variabel pilihan
	int pilih;

	// definisi variabel perulangan
	char ulang;

	// definisi variabel segitiga
	float alas, tinggi;

	// definisi variabel persegi panjang
	float panjang, lebar;

	// definisi variabel hasil 
	float luas;

	// program
	do {
		cout << "MENU" << endl;
		cout << "1. Luas segitiga" << endl;
		cout << "2. Luas persegi panjang" << endl;
		cout << "Pilihan anda : ";
		cin >> pilih;
		if (pilih == 1) {
			cout << "Input alas = ";
			cin >> alas;
			cout << "Input tinggi = ";
			cin >> tinggi;
			luas = alas * tinggi / 2;
			cout << "Luas segitiga yang didapat adalah = " << luas << endl;
		}
		else if (pilih == 2) {
			cout << "Input panjang = ";
			cin >> panjang;
			cout << "Input lebar = ";
			cin >> lebar;
			luas = panjang * lebar;
			cout << "Luas persegi panjang yang didapat adalah = " << luas << endl;
		}
		else {
			cout << "Tidak ada pilihan" << endl;
		}
		cout << endl;
		cout << "Ingin menghitung lagi (y/n) ? ";
		cin >> ulang;
		cout << endl;
		if (ulang != 'y') {
			return 0;
		}
	} while (ulang == 'y');
}