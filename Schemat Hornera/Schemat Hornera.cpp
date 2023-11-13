#include <iostream>
using namespace std;

int funkcja(int wsp[], int st, int x){
		if(st == 0){
			return wsp[0];	
			
		};
		return x * funkcja(wsp, st-1, x) + wsp[st];	
};

int main()
{
	int *wsp;
	int st;
	int x;
	int potega;
	cout << "Podaj stopien wielomianu: ";
	cin >> st;
	potega = st+1;
	wsp = new int [st+1];
	for(int i = 0; i <= st; i++){
		cout << "Wprowadz wspolczynnik stojacy przy potedze "<< (potega -= 1) << ":";
		cin >> wsp[i];
	};
	cout << "Wprowadz argument: ";
	cin >> x;
	cout << "W( "<< x << " ) = " << funkcja(wsp, st, x);
}

