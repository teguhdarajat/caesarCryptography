#include <iostream>
#include <cstring>

using namespace std;

class Kriptografi{
	string pesanRahasia;
	int cipherKey;
	
	public :
		Kriptografi();
		~Kriptografi();
		
		
		void enkripsiPesan(string, int);
		void dekripsiPesan(string, int);
	
};
