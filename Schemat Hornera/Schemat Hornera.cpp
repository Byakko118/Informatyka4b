#include <iostream>
using namespace std;

int main()
{
	int *wsp;
	int st;
	int x;
	cout << "Podaj stopien wielomianu: ";
	cin >> st;
	wsp = new int [st+1];
	for(int i = 0; i < st; i++){
		cout << "Wprowadz wspolczynnik: ";
		cin >> wsp[i];
	};
	cout << "Wprowadz argument: ";
	cin >> x;
}