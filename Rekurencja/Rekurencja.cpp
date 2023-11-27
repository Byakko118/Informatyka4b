#include <iostream>
using namespace std;

long long silnia(long long n) {
    if (n == 0) {
        return 1;
    } else {
        return n * silnia(n - 1);
    }
}

int main() {
    long long n;
    cout << "Podaj liczbe: ";
    cin >> n;
    cout << n << "! = " << silnia(n) << endl;
    return 0;
}

