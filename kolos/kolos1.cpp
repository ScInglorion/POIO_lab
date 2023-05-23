#include <iostream>

class Car{
protected:
    std::string marka;
    int ilosc_paliwa;
    int masa;
    int wsp_X;
public:
    Car(std::string nazwa, int paliwo, int m, int x) : marka(nazwa), ilosc_paliwa(paliwo), masa(m), wsp_X(x){}
    friend class Towing_car;
    void set_marka(std::string nazwa){
        marka = nazwa;
    }
        void set_iloscPaliwa(int p){
        ilosc_paliwa = p;
    }
        void set_masa(int m){
        masa = m;
    }
        void set_wspX(int x){
        wsp_X = x;
    }

    std::string get_marka(){
        return marka;
    }
    int get_iloscPaliwa(){
        return ilosc_paliwa;
    }
    int get_masa(){
        return masa;
    }
    int get_wsp(){
        return wsp_X;
    }

};


class Towing_car : public Car{
public:
    Towing_car(std::string nazwa, int paliwo, int m, int x) : Car(nazwa, paliwo, m, x){}
    void holowanie(Car &samochod, int dystans){
        samochod.wsp_X += dystans;
        ilosc_paliwa -= dystans*0.1;
    }
    void holowanie(Towing_car &zlomek,int dystans){
        zlomek.wsp_X += dystans;
        ilosc_paliwa -= dystans*0.2;
    }
};

int main(void){
    std::cout << "\n car\n";
    Car sam("Opel", 20, 3000, 0);
    std::cout << sam.get_iloscPaliwa() << " Paliwo" <<  std::endl;
    std::cout << sam.get_marka() <<  " marka"<< std::endl;
    std::cout << sam.get_masa() << " masa" << std::endl;
    std::cout << sam.get_wsp() << " wsp"<< std::endl;
    sam.set_iloscPaliwa(52);
    sam.set_marka("hun");
    sam.set_masa(700);
    sam.set_wspX(50);
    std::cout << "\n" << sam.get_iloscPaliwa() << " nowe paliwo"<< std::endl;
    std::cout << sam.get_marka() << " nowa marka"<<std::endl;
    std::cout << sam.get_masa() << " nowa masa"<<std::endl;
    std::cout << sam.get_wsp() << " nowa wsp"<<std::endl;

    std::cout << "\ntowing car\n";
    Towing_car samochod("Opel", 20, 3000, 0);
    std::cout << samochod.get_iloscPaliwa() << " Paliwo" <<  std::endl;
    std::cout << samochod.get_marka() <<  " marka"<< std::endl;
    std::cout << samochod.get_masa() << " masa" << std::endl;
    std::cout << samochod.get_wsp() << " wsp"<< std::endl;
    samochod.set_iloscPaliwa(52);
    samochod.set_marka("hun");
    samochod.set_masa(700);
    samochod.set_wspX(50);
    std::cout << "\n" << samochod.get_iloscPaliwa() << " nowe paliwo"<< std::endl;
    std::cout << samochod.get_marka() << " nowa marka"<<std::endl;
    std::cout << samochod.get_masa() << " nowa masa"<<std::endl;
    std::cout << samochod.get_wsp() << " nowa wsp"<<std::endl;

    Car wroom("merc", 100, 100, 0);
    Car &wroom_ref = wroom;
    samochod.holowanie(wroom_ref, 50);
    std::cout << "\n" << wroom.get_wsp() << " Wsp holowanego samochodu" << std::endl;
    std::cout << "\n" << samochod.get_iloscPaliwa() << " paliwo samochodu" << std::endl;

    Towing_car zlomairz("Zlomek", 200, 200, 0);
    Towing_car &zlomairz_ref = zlomairz;
    samochod.holowanie(zlomairz, 40);
    std::cout << "\n" << zlomairz.get_wsp() << " Wsp holowanego holownika "<< std::endl;
    std::cout << "\n" << samochod.get_iloscPaliwa() << " paliwo samochodu" << std::endl;
}