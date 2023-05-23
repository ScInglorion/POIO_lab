#include <iostream>
#include <new>
using namespace std;
int main ()
{
    int* a = NULL; // Pointer to int, initialize to nothing.
    int n = 0; // Size needed for array
    cout << "what should be the size of your array? " << endl;
    cin >> n;
    a = new int [n]; // Allocate n ints and save ptr in a.
    for (int i=0; i<n; i++) {
        a[i] = i; // Initialize all elements to one two three.
        cout << a[i] << ", ";
    }
    cout << endl << "Array in size " << n << " has been created" << endl;
    delete [] a; // Delete array pointed to by a
    a = NULL; // Clear a to prevent using invalid memory reference.
    cout << "Memory has been cleared" << endl;
    return 0;
}