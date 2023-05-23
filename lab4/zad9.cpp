#include <iostream>
#include <time.h>

class knight{
private:
    int health = 100;
    int strenght;
    std::string name;
public:
    knight(int h, int s, std::string n): health(h), strenght(s), name(n){}
    void sayHi(){ std::cout<<"Hi I'am "<< name << " my health is " << health<<"\n";} //nothing exciting yet
    //a friend function "fight". "&" denotes passing arguments as areference
    // to make possible modification of the input objects
    friend void fight(knight& k1, knight& k2);
    friend class Wizard;
    int healing(){
        return health;
    };
    
 };
void fight(knight& k1, knight& k2){
    int hit1, hit2;

    std::cout<<std::endl<<"wobodobodoo!"<<std::endl<<std::endl;
    hit1 = rand() % k1.strenght;
    hit2 = rand() % k2.strenght;
    k1.health = k1.health - hit2;
    k2.health = k2.health - hit1;
}

class Wizard{
private:
    int health;
    int mana;
    std::string name;
public:
    Wizard(int h, int m, std::string name) : health(h), mana(m), name(name) {}
    void heal(knight &k1){
        if(mana < 35){
            std::cout << "Not enough mana";
        }
        else{
            mana -=35;
            k1.health +=80;
            std::cout << "Zycie " << k1.name << " wynosi " << k1.health << std::endl;
        }
    }

};

int main()
{
    knight orks[5] =
    {   
        knight (100, 100, "Bilbo"),
        knight (200, 200, "Frodo"),
        knight (150, 150, "Sam"),
        knight (120, 120, "Merry"),
        knight (300, 300, "Pipin") 
    };
    knight dwarfs[5] =
    {   
        knight (100, 100, "Dwalin"),
        knight (200, 200, "Balin"),
        knight (150, 150, "Bifour"),
        knight (120, 120, "Bofour"),
        knight (300, 300, "Thorin") 
    };

    for(int i=0; i<5 ;i++){
        fight(orks[i], dwarfs[i]);
        orks[i].sayHi();
        dwarfs[i].sayHi();
    }

}
