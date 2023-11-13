#include <iostream>
using namespace std;

int main() {
	int liczba;
	int tablica[31];
	int i = 0;
	cout << "Podaj liczbe dziesietna: ";
	cin >> liczba;
	while(liczba != 0){
		tablica[i++] = liczba%2;
		liczba = liczba/2;
		
	}
	
	cout << "Liczba " << liczba << " po zamianie na postac binarna: ";
	for(int j = i-1; j >= 0; j-=1){
		cout << tablica[j];
	}
	
	
	
}