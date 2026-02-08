#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    string hex;
    cout << "Введите шестнадцатеричное число: ";
    cin >> hex;

    int decimal = 0;

    for (char c : hex) {
        decimal = decimal * 16;

        if (c >= '0' && c <= '9')
            decimal += c - '0';
        else if (c >= 'A' && c <= 'F')
            decimal += c - 'A' + 10;
        else if (c >= 'a' && c <= 'f')
            decimal += c - 'a' + 10;
    }

    cout << "Десятичное значение: " << decimal << endl;
    return 0;
}