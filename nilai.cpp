#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main() {
	
	char nama[50];
	int nilai_ujian;
	char nilai_huruf;
	
	cout<<"Program Menampilkan Nilai \n";
	cout<<"------------------------- \n";
	cout<<"Masukan nama 	: ";
	cin.getline(nama, sizeof(nama));
	cout<<"Masukan nilai 	: ";
	cin>>nilai_ujian;
	
	if ( nilai_ujian >= 0 && nilai_ujian <= 20) {
		nilai_huruf = 'E';
	} else if ( nilai_ujian >= 21 && nilai_ujian <= 40) {
		nilai_huruf = 'D';
	} else if ( nilai_ujian >= 41 && nilai_ujian <= 60) {
		nilai_huruf = 'C';
	} else if ( nilai_ujian >= 61 && nilai_ujian <= 80) {
		nilai_huruf = 'B';
	} else if ( nilai_ujian >= 81 && nilai_ujian <= 100) {
		nilai_huruf = 'A';
	} else {
		cout<<"------------------------- \n";
		cout<<"Nilai yang anda masukan tidak sesuai"<<endl;
		getch();
		return 0;
	}
	
	cout<<"------------------------- \n";
	cout<<"Nama 		: "<<nama<<endl;
	cout<<"Nilai Ujian	: "<<nilai_ujian<<endl;
	cout<<"Nilai Huruf 	: "<<nilai_huruf<<endl;
	getch();
	
	return 0;
	
}
