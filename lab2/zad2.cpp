#include <iostream>
using namespace std;
int main() {
    int numbers[2][3];
    cout << "Podaj 6 liczb: " << endl;
    // Zapisywanie liczb do tablicy
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> numbers[i][j];
        }
    }
    cout << "Twoje liczby to: " << endl;
    // Wyswietlanie liczb
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "numbers[" << i << "][" << j << "]: " << numbers[i][j]
            << endl;
        }
    }
    return 0;
}