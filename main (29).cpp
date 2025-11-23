#include <iostream>
using namespace std;

int main() {
    const int N = 10;
    int arr[N];

    cout << "Введіть 10 чисел: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    long long product = 1;
    bool found = false;

    for (int i = 0; i < N; i++) {
        if (arr[i] % 4 == 0) {
            product *= arr[i];
            found = true;
        }
    }

    if (found)
        cout << "Добуток чисел, кратних 4 = " << product << endl;
    else
        cout << "Немає чисел, кратних 4." << endl;

    return 0;
}
