/*-
 *	Copyright 2023 nodius
 *
 *	This program is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

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
