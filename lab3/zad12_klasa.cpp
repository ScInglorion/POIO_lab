#include <iostream>
#include "zad12.h"

CellPhone::CellPhone(){}
CellPhone::CellPhone(int price) : nettoPrice(price){}
double CellPhone::vat = 0.08;
void CellPhone::set_nettoPrice(int price){
    nettoPrice = price;
}
int CellPhone::get_nettoPrice(){
    return nettoPrice;
}
int CellPhone::get_profit(){
    return profit;
}
double CellPhone::get_vat(){
    return vat;
}
double CellPhone::price_brutto(){
    return profit + nettoPrice + vat*nettoPrice;
}