#include <iostream>
#include "zad12.h"

int main(void){
    CellPhone Koral, Kraf;
    Koral.set_nettoPrice(5000);
    Kraf.set_nettoPrice(300);
    std::cout << "Cena brutto: " << Koral.price_brutto() << " Cena netto: " << Koral.get_nettoPrice() << " Marza: " << Koral.get_profit() << " VAT " << Koral.get_vat(); 
    std::cout << "\n\nCena brutto Korala: " << Koral.price_brutto() << "\nCena brutto Krafa: " << Kraf.price_brutto();    
}