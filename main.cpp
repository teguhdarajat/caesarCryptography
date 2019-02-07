#include "Kriptografi.h"

int main() {
	Kriptografi pesann;
	string pesan;
	int kunci, pilihan;
	bool keluar;
	
	while(!keluar) {
		cout << "MENU\n";
		cout << "1. Enkripsi Pesan\n";
		cout << "2. Dekripsi Pesan\n";
		cout << "3. Keluar\n";
		cout << "Masukan Pilihan anda : ";
		cin >> pilihan;
	
		switch(pilihan) {
			case 1:
				cout << "Input Pesan yang ingin di Enkripsi : ";
				cin >> pesan;
				cout << "Input kunci rahasia : ";
				cin >> kunci;
				pesann.enkripsiPesan(pesan, kunci);
				break;
			case 2: 
				cout << "Input Pesan Rahasia yang ingin di Dekripsi : "; 
				cin >> pesan;
				cout << "Input kunci rahasia : ";
				cin >> kunci;
				pesann.dekripsiPesan(pesan, kunci);
				break;
			case 3: 
				keluar = true;
		}
	}

}
