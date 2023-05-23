#include <iostream>
#include <vector>
#include <cmath>


class Orc{
    int health=100;
    int wsp_x;
    int wsp_y;
public:
    Orc(int h, int x, int y) : health(h), wsp_x(x), wsp_y(y){}
    friend class Wizzard;
    void show_health(){
        std::cout << "Mam "<< health << " zdrowia\n";
    }

};

class Wizzard{
    int health;
    int wsp_x;
    int wsp_y;
public:
    Wizzard(int h, int x, int y) : health(h), wsp_x(x), wsp_y(y){}
    void ball_of_fire(std::vector<Orc> &orkowie, int size){
        
        for(int i=0; i<size;i++){
            if(sqrt(pow(wsp_x-orkowie[i].wsp_x,2)+pow(wsp_y-orkowie[i].wsp_y,2)) <50){
                orkowie[i].health = 0;
            }
        }
    }  
};


void show_members(std::vector<Orc> &orkowie, int size){
    for(int i=0; i<size; i++){
        orkowie[i].show_health();
    }
}


int main(void){
    Wizzard DiamondNever(100, 0, 0);
    std::vector<Orc> oddzial;
    for(int i=0; i<10;i++){
        oddzial.push_back(Orc(100, i*5, i*5));
    }
    std::vector<Orc> &odzial_ref = oddzial;
    show_members(odzial_ref, oddzial.size());
    DiamondNever.ball_of_fire(odzial_ref, oddzial.size());
    show_members(odzial_ref, oddzial.size());
}