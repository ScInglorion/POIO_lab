#include <iostream>
using namespace std ;
void potrojenie(int ile, long tablica[]); //
/******************************************************/
int main()
{
const int rozmiar = 8192 ; //
long widmo[rozmiar] ; //
 // ----------nadanie wartosci poczatkowej
 for(int i = 0 ; i < rozmiar ; i ++)
 {
 widmo[i] = i ; //
 if(i < 6) // pokazanie pierwszych szesciu
 cout << "widmo[" << i << "]= " << widmo[i]
 << endl ;
 }
 // ----------uwaga, wywolujemy funkcje !
 potrojenie(rozmiar, widmo) ; //
 cout << "Po wywolaniu funkcji \n" ;
 for(int k = 0 ; k < 4 ; k ++)
 { //
 cout << "widmo[" << k << "]= " << widmo[k] << endl ;
 }
}
/******************************************************/
void potrojenie (int ile, long t[]) //
{
 for(int i = 0 ; i < ile ; i++)
 {
 t[i] *= 3 ; //
 }
}
/******************************************************/
