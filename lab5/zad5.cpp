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
    // uzycie virtualnej funckji pozwala ja overridowac przez funkcje pochodna, jesli maja te sama nazwe.
    virtual void sayHi (){
         std::cout <<"Yo, my name is " << name << " and my stats are: " << health << "-health "  << mana << "-mana " << capacity << "-cap " << speed << "-speed " << base_armor;
    
    }
};

class Knight : public Hero{
private:
    int sword_fighting;
public:
    Knight(std::string n, int h, int m, int cap, int s, int ba, int sword) : Hero(n, h, m, cap, s, ba)  { // w pierwszym parametery ktore sie wpisuje. Te parametry pozniej sa wrzucane jako argumenty do hero i na ich podstawie w hero je cyka konstruktor
        sword_fighting = sword;
    }
    void hi(){
        std::cout <<"Yo, my name is " << name << " and my stats are: " << health << "-health "  << mana << "-mana " << capacity << "-cap " << speed << "-speed " << base_armor << "-armor and I am " << sword_fighting << " strong." << std::endl;
    }
};


class Wizzard : public Hero{
private:
    int magicLvel;
public:
    Wizzard(std::string n, int h, int m, int cap, int s, int ba, int mLvl) : Hero(n, h, m, cap, s, ba){
        magicLvel = mLvl;        
    }
    void hi(){
        std::cout <<"Yo, my name is " << name << " and my stats are: " << health << "-health "  << mana << "-mana " << capacity << "-cap " << speed << "-speed " << base_armor << "-armor and I have " << magicLvel << " mlvl." << std::endl;
    }    
};


class Archer : public Hero{
private:
    int numberOfArrows;
public:
    Archer(std::string n, int h, int m, int cap, int s, int ba, int arrowNum) : Hero(n, h, m, cap, s, ba){
        numberOfArrows = arrowNum;          
    }
    void hi(){
        std::cout <<"Yo, my name is " << name << " and my stats are: " << health << "-health "  << mana << "-mana " << capacity << "-cap " << speed << "-speed " << base_armor << "-armor and I have " << numberOfArrows << " arrows." << std::endl;
    }     
};

int main(void){
    Knight knajt_czy_najt("knajt_czy_najt",100,100,200,35, 20, 40);
    Wizzard drut("DiamondNever", 50, 200, 100, 35, 10, 10);
    Archer elf("Legolas", 80, 140, 100, 50, 15, 9999999);   
    Hero * wybrany_bohater = nullptr;
    int wybor = 0;
    std::cout << "Wybierz jedną z klas. Do wyboru masz: \n1-Knighta\n2-Druida\n3-Palka\n";
    std::cin >> wybor;
    if(wybor == 1){
        wybrany_bohater = &knajt_czy_najt;
    }
    else if(wybor == 2){
        wybrany_bohater = &drut;
    }
    else{
        wybrany_bohater = &elf;
    }
    wybrany_bohater->sayHi();

}