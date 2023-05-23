#include <iostream>
// Trzeba było wyjebac dziedziczenie z Wizzarda, bo próbował przez dwie różbe klasy stworzyć jednego Hero i kompilator nie wiedział co sie dzieje, wiec przy dziedziczeniu
// z wielu klas gdy te dziedziczał z jeszcze innej wspolnej kasy, to nie bardzo to przejdzie chyba, bummer
// a dobra walne virtualek i chyba sie narawi lolz

// wyglada na to, ze przy dziedziczeniu z wirtualki wywoływany jest konstruktor basicowy bez parametrow. Ciezka sprawa tbh, nie jest to
// kinda usless ???? trzeba ambro zapytac
// okej moze jednak jest inaczej?? jak bedzie cirtualka w pierwszym derativie i wirtualka w drugim derativie, to z jakiegos powodu
// inicjuje nie basic tylko argumentowy konstruktor z hero, like wtthhhh mannn, fucked up. 
class Hero{
protected:
    std::string name;
    int health;
    int mana;
    int capacity;
    int speed;
    int base_armor;
public:
    Hero(){ // bylby callowany, gdyby wiesiek dziedziczyl publicki nie virtual publicki
    std::string name = "Geralt";
    int health = 9999;
    int mana = 9999;
    int capacity = 9999;
    int speed = 9999;
    int base_armor= 9999;
    }
    // calowany bo wiesiek ma virtual publicki (ig)
    Hero(std::string n, int h, int m, int cap, int s, int ba) : name(n), health(h), mana(m), capacity(cap), speed(s), base_armor(ba){}

};


class Knight : public Hero{
protected:
    int sword_fighting;
public:
    Knight(std::string n, int h, int m, int cap, int s, int ba, int sword) : Hero(n, h, m, cap, s, ba)  {
        sword_fighting = sword;
    }
    void sayHi(){
        std::cout <<"Witaj, my name is " << name << " and my stats are: " << health << "-health "  << mana << "-mana " << capacity << "-cap " << speed << "-speed " << base_armor << "-armor and I have " << sword_fighting <<" sword fighting"<< std::endl;
    }      
};


class Wizzard : public Hero{
protected:
    int magicLvel;
public:
    Wizzard(std::string n, int h, int m, int cap, int s, int ba, int mLvl) : Hero(n, h, m, cap, s, ba){
        magicLvel = mLvl;        
    }
    Wizzard(int mLvl) : magicLvel(mLvl){}

    void sayHi(){
        std::cout <<"Witaj, my name is " << name << " and my stats are: " << health << "-health "  << mana << "-mana " << capacity << "-cap " << speed << "-speed " << base_armor << "-armor and I have "<< magicLvel << " mlvl." << std::endl;
    }        
};


class Witcher : public virtual Knight, public virtual Wizzard{
private:
    std::string pogoda;
public:
    Witcher(std::string n, int h, int m, int cap, int s, int ba, int sword, int mLvl, std::string pogoda) : Wizzard (n, h, m, cap, s, ba, sword), Knight(n, h, m, cap, s, ba, mLvl), pogoda(pogoda) {}
    void sayHi(){
        Wizzard::sayHi();
        Knight::sayHi();
        std::cout<<"Toss a coin to the wither!" <<std::endl;
        std::cout << pogoda;
}
};


int main(void){
    Witcher Geralt("Gerwazy", 500, 300, 99999, 90, 60, 100, 40, "Alez wieje");
    Geralt.sayHi();
}