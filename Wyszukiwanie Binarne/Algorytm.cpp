#include <iostream>
using namespace std;

int main(){

	int szukana;
	cout << "Input the number you're searching for: ";
	cin >> szukana;
	int tab[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
	int l = 0;
	int p = 15;
	int sr = (l+p)/2;
	while(l <= p){
		if(tab[sr] == szukana){
			cout << sr;
		}
		if(tab[sr] > szukana){
			p = sr - 1;
		}
		else {
			l = sr +1;
		}
		sr = (l+p)/2;
	}
	if(tab[sr] != szukana) cout << -1;

	return 0;	
}