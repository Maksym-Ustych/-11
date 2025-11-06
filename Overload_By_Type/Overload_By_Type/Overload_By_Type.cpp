#include <iostream>
#include <windows.h>
using namespace std;

// --- Перевантаження за типом аргументів ---
void show(int x) {
    cout << "Функція show(int): x = " << x << endl;
}

void show(double x) {
    cout << "Функція show(double): x = " << x << endl;
}

void show(char x) {
    cout << "Функція show(char): x = '" << x << "'" << endl;
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    cout << "--- Перевантаження за типом аргументів ---" << endl;
    show(15);
    show(2.71);
    show('Б');

    return 0;
}