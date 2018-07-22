#include <iostream>
#include <string>
#include <boost>

using namespace std;
using namespace boost;

string pojedynczeWyrazy[19] = { "ein", "zwei", "drei", "vier", "fuenf", "sechs", "sieben", "acht",
"neun", "zehn", "zwanzig", "und", "dreizig", "vierzig", "fuenfzig", "sechzig", "siebzig", "achtzig", "neunzig" };

int main() {

	cout << "Podaj slownie jakies niemieckie slowo (do 100 - Hundert)" << endl;
	string a;
	cin >> a;

	for (int i = 0; i < 18; i++) {

		bool odpowiedz = contains(a, pojedynczeWyrazy[i]);
		if (odpowiedz == true)
		{
			cout << "Sciezka slowa to C:\nagrania'\'" << pojedynczeWyrazy[i] << ".mp3" << endl;
		}
		return 0;
	}

}