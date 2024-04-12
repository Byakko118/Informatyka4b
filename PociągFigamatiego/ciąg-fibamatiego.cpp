#include <iostream>
using namespace std;

/* METODA 1
long long int fibonacci(int n) {
    if (n < 3) {
        return 1;
    }
    else {
        return fibonacci(n - 2) + fibonacci(n - 1);
    }
}


int main() {
    int n;
    cout << "Podaj nr wyrazu ciagu: ";
    cin >> n;
    cout << n << " wyraz ciagu ma wartosc " << fibonacci(n) << endl;
    return 0;
}
*/

long long int fibonacci(int n) {
    long long f0, f1, f;
    f0 = 0;
    f1 = 1;
    for (int i = 0; i <= n; i++)
    {
        if (i > 1) 
        {
            f = f0 + f1;
            f0 = f1;
            f1 = f;
            cout << f << endl;
        }
        else
        {
            f = i;
            cout << f << endl;
        }
    }
    return f;
}

int main() 
{
    int n;
    cout << "Podaj nr wyrazu ciagu: ";
    cin >> n;
    cout << n << " wyraz ciagu ma wartosc " << fibonacci(n) << endl;
}
