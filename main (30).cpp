#include <iostream>
#include <cmath>
using namespace std;

double term(double x, int k) {
    return sin(pow(x, k) - M_PI) / (log(k * k) + 0.3);
}

int main() {
    double x;
    cout << "Введіть x: ";
    cin >> x;

    double S = 0;
    for (int k = 1; k <= 7; k++) {
        S += term(x, k);
    }

    cout << "Сума S = " << S << endl;
    return 0;
}

