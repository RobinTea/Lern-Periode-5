#include <iostream>
#include <random>
using namespace std;

int main() {
	random_device rd;
	mt19937 gen(rd()); 
	uniform_int_distribution<> dis(1, 100);

	int zahl = dis(gen);
	int gerateneZahl;
	int versuche = 0;
	const int maxVersuche = 10;

	cout << "Willkomen" << endl;
	cout << "Ich denke an einer Zahl zwischen 1 und 100" << endl;
	cout << "Du hast 10 versuche, kannst du sie erraten?" << endl;

	do {
		cout << "Was ist die Zahl ";
		cin >> gerateneZahl;

		if (cin.fail()){
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Falsch" << endl;
			continue;
		}

		versuche++;

		if (gerateneZahl > zahl) {
			cout << "Zu hoch ;) nochmal!" << endl;
		}
		else if (gerateneZahl < zahl) {
			cout << "Zu niedrig, nochmal!" << endl;
		}
		else {
			cout << "crazy" << endl;
			cout << "du hast " << versuche << " Versuche benoetigt" << endl;
			break;
		}

		if (versuche >= maxVersuche) {
			cout << "versuche überschritten" << endl;
			cout << "Die richtige Zahl war" << zahl << endl;
			break;
		}
	}  while (gerateneZahl != zahl);

	return 0;
}