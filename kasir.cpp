#include <iostream>
using namespace std;

int main() {

	//  variabel
	int nasi = 3000;
	int ayam_goreng = 7000;
	int ikan_goreng = 5000;
	int teh_tawar = 2000;
	int teh_manis = 4000;

	int pilih;
	int kuantitas;
	
	int total = 0;
	int bayar;
	int kembali;
	
	char ulang;
	char reset;
	

	// program
	do {
		cout << "----------------------" << endl;
		cout << "Kasir Warteg Sederhana" << endl;
		cout << "----------------------" << endl;
		cout << "MENU" << endl;
		cout << "1. Nasi" << endl;
		cout << "2. Ayam Goreng" << endl;
		cout << "3. Ikan Goreng" << endl;
		cout << "4. Teh Tawar" << endl;
		cout << "5. Teh Manis" << endl;
		cout << "Menu yang dipesan : ";
		cin >> pilih;
		cout << "Berapa banyak : ";
		cin >> kuantitas;
		if (pilih == 1) {
			total += (nasi * kuantitas);
		}
		else if (pilih == 2) {
			total += (ayam_goreng * kuantitas);
		}
		else if (pilih == 3) {
			total += (ikan_goreng * kuantitas);
		}
		else if (pilih == 4) {
			total += (teh_tawar * kuantitas);
		}
		else if (pilih == 5) {
			total += (teh_manis * kuantitas);
		}
		else {
			cout << "pesan tidak ada di menu" << endl;
			cout << endl;
			cout << "Copyright 2020 Adam Zein" << endl;
			system("PAUSE");
			return 0;
		}

		cout << endl;
		cout << "Pesan lagi (y/n) ? ";
		cin >> ulang;
		cout << endl;
		if (ulang == 'n') {
			cout << "Total harga : " << total << endl;
			cout << "Masukan uang : ";
			cin >> bayar;
			kembali = bayar - total;
			cout << "Kembalian : " << kembali << endl;
			cout << endl;
			cout << "Reset kasir atau tutup aplikasi (r/c) ? ";
			cin >> reset;
			cout << endl;
			if (reset == 'r') {
				system("cls");
				total = 0;
				ulang = 'y';
			}
			else if (reset == 'c') {
				cout << "Terimakasih..";
				cout << endl;
				cout << "Copyright 2020 Adam Zein" << endl;
				system("PAUSE");
				return 0;
			}
			else {
				cout << "input yang dimasukan tidak sesuai";
				cout << endl;
				cout << "Copyright 2020 Adam Zein" << endl;
				system("PAUSE");
				return 0;
			}

		}
		else if (ulang != 'y') {
			cout << "input yang dimasukan tidak sesuai";
			cout << endl;
			cout << "Copyright 2020 Adam Zein" << endl;
			system("PAUSE");
			return 0;
		}
	
	} while (ulang == 'y');
}