#include <iostream>
#include <string>
#include "boost/algorithm/string.hpp"

using namespace std;
using namespace boost;

string pojedynczeWyrazy[19] = {"ein", "zwei", "drei", "vier", "fuenf", "sechs", "sieben", "acht", 
"neun", "zehn", "zwanzig", "und", "dreizig", "vierzig", "fuenfzig", "sechzig", "siebzig", "achtzig", "neunzig"}

int main() {

	string a;
	cout << "Podaj jakas niemiecka liczbe (od 1 do 100)" << endl;
	cin >> a;

	for (int i = 0; i < pojedynczeWyrazy; i++) {

		bool odpowiedz = contains(a, pojedynczeWyrazy);
		if (bool == true)
		{
			cout << "Sciezka slowa to C:\nagrania'\'" << pojedynczeWyrazy[i] << ".mp3" << endl;
		}
		return 0;
	}
}

	
