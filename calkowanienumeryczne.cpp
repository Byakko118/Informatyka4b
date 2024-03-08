#include <iostream>

double f(double x) {
    return x * x + x + 2;
}

double obliczPole(double a, double b, int n) {
    double x = (b - a) / n, S = 0.0, s = a + (b - a) / (2.0 * n);

    for (int i = 0; i < n; ++i) {
        S += f(s);
        s += x;
    }

    return S * x;
}

int main() {
    double a, b;
    int n;

    std::cout << "Podaj przedzia³ [a, b]\na = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;

    std::cout << "Podaj liczbê trapezów: ";
    std::cin >> n;

    double pole = obliczPole(a, b, n);

    std::cout << "Pole figury wynosi: " << pole << std::endl;

    return 0;
}
