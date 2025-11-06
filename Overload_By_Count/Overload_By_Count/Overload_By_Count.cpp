#include <iostream>
#include <windows.h>
using namespace std;

// --- Перевантаження за кількістю аргументів ---
int sum(int a, int b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    cout << "--- Перевантаження за кількістю аргументів ---" << endl;
    cout << "sum(4, 6) = " << sum(4, 6) << endl;
    cout << "sum(2, 3, 5) = " << sum(2, 3, 5) << endl;

    return 0;
}