#include "kriptografi.h"

Kriptografi::Kriptografi() {
	pesanRahasia = "";
	cipherKey = 0;
	cout << "Konstruktor berhasil di jalankan\n";
}

Kriptografi::~Kriptografi(){
	cout << "Destruktor di jalankan\n";
}

void Kriptografi::enkripsiPesan(string pesan, int kunci) {
	char characterPesan;
	pesanRahasia = pesan;
	cipherKey = kunci;
	char *getChar = new char[pesanRahasia.length()];
	strcpy(getChar, pesanRahasia.c_str());
	for (int i = 0; i < pesanRahasia.length(); i++) {
		characterPesan = getChar[i];
		if (characterPesan >= 'a' && characterPesan <= 'z') {
			characterPesan = characterPesan + kunci;
			
			if(characterPesan > 'z') {
				characterPesan = characterPesan - 'z' + 'a' - 1;
			}
			
			getChar[i] = characterPesan;
		}
		
		else if (characterPesan >= 'A' && characterPesan <= 'Z') {
			characterPesan = characterPesan + kunci;
			
			if(characterPesan > 'Z') {
				characterPesan = characterPesan - 'Z' + 'A' - 1;
			}
			
			getChar[i] = characterPesan;
		}
	}
	
	cout << "Pesan yang telah di enkripsi : " << getChar << endl;	
}

void Kriptografi::dekripsiPesan(string pesan, int kunci) {
	char characterPesan;
	pesanRahasia = pesan;
	cipherKey = kunci;
	char *getChar = new char[pesanRahasia.length() + 1];
	strcpy(getChar, pesanRahasia.c_str());
	for (int i = 0; i < pesanRahasia.length(); i++) {
		characterPesan = getChar[i];
		if (characterPesan >= 'a' && characterPesan <= 'z') {
			characterPesan = characterPesan + kunci;
			
			if(characterPesan < 'a') {
				characterPesan = characterPesan + 'z' - 'a' + 1;
			}
			
			getChar[i] = characterPesan;
		}
		
		else if (characterPesan >= 'A' && characterPesan <= 'Z') {
			characterPesan = characterPesan - kunci;
			
			if(characterPesan > 'a') {
				characterPesan = characterPesan + 'Z' - 'A' + 1;
			}
			
			getChar[i] = characterPesan;
		}
	}
	
	cout << "Pesan rahasia : " << getChar << endl;	
}



