#include <iostream>

#define string std::string

string Decoder(string CipheredString) {
	char Decrypted;

	for (int i = 0; i < CipheredString.length(); i++) {
		Decrypted = CipheredString[i];
		if (Decrypted >= 'a' && Decrypted <= 'z') {	
			Decrypted = (Decrypted - 'a' + 13) % 26 + 'a';
	
		} else if (Decrypted >= 'A' && Decrypted <= 'Z') {
			Decrypted = (Decrypted - 'A' + 13) % 26 + 'A';
		}
		CipheredString[i] = Decrypted;
	}

	return CipheredString;
}

int main() {
	string CipheredString;
	std::cout << "Enter the ciphered string: ";
	std::cin >> CipheredString;
	
	std::cout << Decoder(CipheredString);

	std::cin.get();
}