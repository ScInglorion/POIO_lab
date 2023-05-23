/*
* print_dec2bin.cpp
*
* Created on: 17 lut 2022
* Author: Lukasz
*/
#include <iostream>
#include "print_dec2bin.h"
using namespace std;
void print_dec2bin(int num){
 int reminder; 
 // reminder after division - reszta z dzielenia
 cout << "Decimal " << num << " equals to " ;
 while (num > 0){
 reminder = num % 2; // oblicz resztę z dzielenia przez 2
 cout << reminder; // wyswietl resztę
 num = (num - reminder) / 2;
 }
 cout<< " in binary." << endl;
}
