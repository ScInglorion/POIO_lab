#include <iostream>
// Trzeba było wyjebac dziedziczenie z Wizzarda, bo próbował przez dwie różbe klasy stworzyć jednego Hero i kompilator nie wiedział co sie dzieje, wiec przy dziedziczeniu
// z wielu klas gdy te dziedziczał z jeszcze innej wspolnej kasy, to nie bardzo to przejdzie chyba, bummer
// a dobra walne virtualek i chyba sie narawi lolz


class Hero{
protected:
    std::string name;
    int health;
    int mana;
    int capacity;
    int speed;
    int base_armor;
public:
    Hero(){}
    Hero(std::string n, int h, int m, int cap, int s, int ba) : name(n), health(h), mana(m), capacity(cap), speed(s), base_armor(ba){}

};


class Knight : public Hero{
protected:
    int sword_fighting;
public:
    Knight(std::string n, int h, int m, int cap, int s, int ba, int sword) : Hero(n, h, m, cap, s, ba)  { // w pierwszym parametery ktore sie wpisuje. Te parametry pozniej sa wrzucane jako argumenty do hero i na ich podstawie w hero je cyka konstruktor
        sword_fighting = sword;
    }
};


class Wizzard {
protected:
    int magicLvel;
public:
    Wizzard(std::string n, int h, int m, int cap, int s, int ba, int mLvl){
        magicLvel = mLvl;        
    }
    Wizzard(int mLvl) : magicLvel(mLvl){}    
};


class Witcher : public Knight, public Wizzard{
private:
    std::string pogoda;
public:
    Witcher(std::string n, int h, int m, int cap, int s, int ba, int sword, int mLvl, std::string pogoda) : Knight(n, h, m, cap, s, ba, sword), Wizzard(mLvl), pogoda(pogoda){}
    void hi(){
        std::cout <<"Witaj, my name is " << name << " and my stats are: " << health << "-health "  << mana << "-mana " << capacity << "-cap " << speed << "-speed " << base_armor << "-armor and I have " << sword_fighting <<" sword fighting and " << magicLvel << " mlvl." << std::endl;
        std::cout << pogoda << std::endl;
    }
};



int main(void){
    Witcher Geralt("Gerwazy", 500, 300, 99999, 90, 60, 100, 40, "Alez wieje");
    Geralt.hi();
}