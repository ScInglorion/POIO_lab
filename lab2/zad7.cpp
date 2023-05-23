#include <iostream>
using namespace std;
// deklaracja funkcji
void swap(int x, int y);
void swapByRef(int &x, int &y);


int main () {
    // deklaracja zmiennej lokalnej:
    int a = 100;
    int b = 200;
    cout << "Wartosc przed zamiana a :" << a << endl;
    cout << "Wartosc przed zamiana b :" << b << endl;
    // wywolujemy funkcje zamien.
    swap(a, b);
    cout << "Wartosc po zamianie byVal a :" << a << endl;
    cout << "Wartosc po zamianie byVal b :" << b << endl;
    // wywolujemy funkcje zamien przekazując zmienne przez referencję.
    swapByRef(a, b);
    cout << "Wartosc po zamianie byRef a :" << a << endl;
    cout << "Wartosc po zamianie byRef :" << b << endl;
    return 0;
}


// function definition to swap the values.
void swap(int x, int y) {
    int temp;
    temp = x; /* save the value of x */
    x = y; /* put y into x */
    y = temp; /* put x into y */
    return;
}


// function definition to swap the values.
void swapByRef(int &x, int &y) {
    int temp;
    temp = x; /* save the value of x */
    x = y; /* put y into x */
    y = temp; /* put x into y */
 return;
}
