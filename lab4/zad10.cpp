#include <iostream>
#include <time.h>

class knight{
private:
    int health = 100;
    int strenght;
    std::string name;
public:
    knight(){}
    knight(int h, int s, std::string n): health(h), strenght(s), name(n){}
    void sayHi(){ std::cout<<"Hi I'am "<< name << " my health is " << health<<"\n";} //nothing exciting yet
    //a friend function "fight". "&" denotes passing arguments as areference
    // to make possible modification of the input objects
    friend void fight(knight& k1, knight& k2);
    friend class Wizard;
    int healing(){
        return health;
    };
    void set(int h, int s, std::string n){
        health  = h;
        strenght = s;
        name = n;
    }
    void get(){
        std::cout << "Knight o imieniu: " << name << " ma " << health << " zycia i " << strenght << " sily\n";
    }
 };


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


void fight(knight& k1, knight& k2){
    int hit1, hit2;

    std::cout<<std::endl<<"wobodobodoo!"<<std::endl<<std::endl;
    hit1 = rand() % k1.strenght;
    hit2 = rand() % k2.strenght;
    k1.health = k1.health - hit2;
    k2.health = k2.health - hit1;
}


void insert_into_army(knight army[], int size){
    for(int i=0; i<size; i++){
        std::cout << "Podaj parametry " << i+1 << " knighta.\n";
        int h;
        int s;
        std::string n;
        std::cin >> h >> s >> n;
        army[i].set(h,s,n);
    }   
}


void display_army(knight army[], int size){
    for(int i=0; i<size;i++){
        army[i].get();
    }
}


int main()
{   
    knight *palki = nullptr;
    int n = 0;
    std::cout << "Jak wielki oddzial palkow chcesz utworzyc?" << std::endl;
    std::cin >> n;
    palki = new knight[n];
    insert_into_army(palki, n);
    display_army(palki,n);

    knight *orci = nullptr;
    int m = 0;
    std::cout << "Jak wielki oddzial orcow chcesz utworzyc?" << std::endl;
    std::cin >> m;
    orci = new knight[m];
    insert_into_army(orci, m);
    display_army(orci,m);
}
