#include <iostream>
using namespace std;

int main() {
	int kwota;
	cout << "Podaj resztê do wydania: ";
	cin >> kwota;
	
	int nominaly[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
	int n = sizeof(nominaly) / sizeof(nominaly[0]);

	for (int i = 0; i < n; i++) {
		int ile = kwota / nominaly[i];
		kwota -= ile * nominaly[i];
		if (ile > 0) {
			cout << nominaly[i] << " x " << ile << endl;
		}
	}
}