#include <iostream>
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


class Knight :  public virtual Hero{
protected:
    int sword_fighting;
public:
    Knight(std::string n, int h, int m, int cap, int s, int ba, int sword) : Hero(n, h, m, cap, s, ba)  {
        sword_fighting = sword;
    }
    Knight(int sword) : sword_fighting(sword){}
    virtual void hi(){
        std::cout <<"Yo, my name is " << name << " and my stats are: " << health << "-health "  << mana << "-mana " << capacity << "-cap " << speed << "-speed " << base_armor << "-armor and I have " << sword_fighting << " sword fighting." << std::endl;
    } 
};


class Wizzard :  public virtual Hero{
protected:
    int magicLvel;
public:
    Wizzard(std::string n, int h, int m, int cap, int s, int ba, int mLvl) : Hero(n, h, m, cap, s, ba){
        magicLvel = mLvl;        
    }
    Wizzard(int mLvl) : magicLvel(mLvl){}    
    virtual void hi(){
        std::cout <<"Yo, my name is " << name << " and my stats are: " << health << "-health "  << mana << "-mana " << capacity << "-cap " << speed << "-speed " << base_armor << "-armor and I have " << magicLvel << " mlvl." << std::endl;
    }    
};

//Oke, wygląda na to, ze virtual leci w kulki i coś nie chce poprawnie budować się odnosząc sie do hero przez Knighta
// tylko musi sie do niego odniesc bezposrednio. ????? Kinda useless like po diabla to, musi byc jakas inna przyczyna ocb ong
// Czemu callujac virtuala inicjuje sie pusty konstruktor, reeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee
// fucked up

                                                // zapytac ambor
class Witcher : public Knight, public Wizzard{
private:
    std::string pogoda;
public:
    Witcher(std::string n, int h, int m, int cap, int s, int ba, int sword, int mLvl, std::string pogoda) : Knight(n, h, m, cap, s, ba, sword), Wizzard(mLvl), pogoda(pogoda){}
    //Witcher(std::string n, int h, int m, int cap, int s, int ba, int sword, int mLvl, std::string pogoda) : Hero(n, h, m, cap, s, ba), Knight(sword), Wizzard(mLvl), pogoda(pogoda){}    
    void hi(){
        std::cout <<"Witaj, my name is " << name << " and my stats are: " << health << "-health "  << mana << "-mana " << capacity << "-cap " << speed << "-speed " << base_armor << "-armor and I have " << sword_fighting <<" sword fighting and " << magicLvel << " mlvl." << std::endl;
        std::cout << pogoda << std::endl;
    }
};



int main(void){
    Witcher Geralt("Gerwazy", 500, 300, 99999, 90, 60, 100, 40, "Alez wieje");
    Geralt.hi();
}