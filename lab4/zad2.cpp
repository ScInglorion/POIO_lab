/*
Example taken from Symfonia C++ J. Grebosz
wyd 3B.
str. 440
*/
#include <iostream>
using namespace std;
void plakat(string s);
int main(){
    string klub1("Wisla");
    string klub2("Unia");
    string mias1 = "Krakow";
    string mias2 = "Tarnow";
    string polaczenie;
    polaczenie = klub1 + klub2;
    cout << "Dodawanie dwoch stringow [" << polaczenie << "]\n\n";
    string zapowiedz = klub1 + "-" + mias1;
    zapowiedz = zapowiedz + "vs. ";
    zapowiedz += klub2;
    zapowiedz += ('-' + mias2);
    cout<< "!!! Zapraszamy na mecz!!! \n";
    plakat(zapowiedz);
    zapowiedz += " Rezulrar meczu ";
    cout << "\n\nPodaj wynik meczu ";
    string wynik;
    cin >> wynik;
    cout << "\n\n UWAGA: Wczoraj odbyl sie mecz\n";
    
    plakat(zapowiedz + wynik);
}
void plakat(string tresc)
{
    string gwiazdki(tresc.length() + 6, '*');
    cout << gwiazdki << "\n" << gwiazdki << "\r" << "* " << tresc << " **\n"
    << gwiazdki << endl;
}