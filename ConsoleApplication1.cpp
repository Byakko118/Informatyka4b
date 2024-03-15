#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
    int n;
    cout << "Wprowadz liczbe elementow do posortowania: ";
    cin >> n;

    int* tab = new int[n];
    int temp;

    cout << "Tablica przed posortowaniem:\n";
    srand(time(0)); 

    for (int x = 0; x < n; x++) {
        tab[x] = rand() % 100;
        cout << tab[x] << " | ";
    }

    cout << "\n\nRozpoczecie sortowania\n";

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

    cout << "\nTablica po sortowaniu:\n";
    for (int x = 0; x < n; x++) {
        cout << tab[x] << " | ";
    }

    return 0;
}