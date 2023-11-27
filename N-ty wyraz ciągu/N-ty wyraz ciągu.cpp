#include <iostream>
using namespace std;

float funkcja(float n){
	if (n == 1){
		return 1;
	}
	else if(n == 2){
		return 0.5;
	}
	else{
		return -funkcja(n-1) * funkcja(n-2);
	}
}

int main() {
	int n;
	int x;
	cout << "Podaj nr wyrazu ciagu, ktorego wartosc chcesz policzyc: ";
	cin >> n;
	x = n;
	cout << x << " wyraz ciagu ma wartosc " << funkcja(n);
}

