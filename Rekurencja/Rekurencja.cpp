#include <iostream>
using namespace std;

int main()
{
	long long n;
	long long wynik = 1;
	cout << "Wpisz liczbe: ";
	cin >> n;
	cout << n << "!" << " = ";
	for(long long i = 1; i <= n; i++){
		cout << i;
		if(i < n){
			cout << " * ";
		};
		wynik = wynik * i;
	};
	cout << " = " << wynik;
}