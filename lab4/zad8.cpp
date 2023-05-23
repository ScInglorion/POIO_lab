#include <iostream>
#include <time.h>

class knight{
private:
    int health;
    int strenght;
    std::string name;
public:
    knight(int h, int s, std::string n): health(h), strenght(s), name(n){ }
    void sayHi(){ std::cout<<"Hi I'am "<< name << " my health is " << health<<"\n";} //nothing exciting yet
    //a friend function "fight". "&" denotes passing arguments as areference
    // to make possible modification of the input objects
    friend void fight(knight& k1, knight& k2);
    friend class Wizard;
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
    knight jozek( 100,100, "Jozek");
    knight zdzich( 100,100, "Zdzichu");
    Wizard Koral(420, 1050, "Inglorion");
    jozek.sayHi(); zdzich.sayHi();
    srand (time(NULL));
    fight(jozek,zdzich);
    jozek.sayHi(); zdzich.sayHi();
    Koral.heal(jozek);
    return 0;
}
