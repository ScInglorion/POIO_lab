#include <iostream>
#include <vector>
#include <cmath>
#include <map>  
#include <cstdlib>
#include <algorithm>






class Orc{
    std::string name;
    int health=100;
    int wsp_x;
    int wsp_y;
    int distance = 0;
public:
    Orc(int h, int x, int y) : health(h), wsp_x(x), wsp_y(y){}
    friend class Wizzard;
    void show_health(){
        std::cout << "Mam "<< health << " zdrowia\n";
    }
    void set_name(std::string imie){
        name = imie;
    }
    void show_name(){
        std::cout << name << " ";
    }
};

double calculate_position(int x1, int x2, int y1, int y2);
void show_members(std::vector<Orc> &orkowie, int size);

class Wizzard{
    int health;
    int wsp_x;
    int wsp_y;
public:
    Wizzard(int h, int x, int y) : health(h), wsp_x(x), wsp_y(y){}
    void ball_of_fire(std::vector<Orc> &orkowie, int size){
        std::map <int, int> orcowie_sortowani;
        for(int i=0; i<size;i++){
            orkowie[i].distance = calculate_position(wsp_x, orkowie[i].wsp_x, wsp_y, orkowie[i].wsp_y);
            orcowie_sortowani[orkowie[i].distance] = i;
        }
        int map_iterator = 0;
        std::map <int, int>::iterator iter = orcowie_sortowani.begin();
        int orc_pos_arr[4];
        if(size < 5){
            while(map_iterator < size){
                orkowie[map_iterator].health = 0;
                map_iterator++;
            }
        }
        else{
            while(iter != orcowie_sortowani.end()){
                orc_pos_arr[map_iterator] = iter->second;
                orkowie[iter->second].health = 0;
                map_iterator++;                
                if(map_iterator == 5){
                    break;
                }
                ++iter;                
            }
        }
        // IT is here just so i can see that it indeed works 
        // show_members(orkowie, size);
        // std::sort(orc_pos_arr[0], orc_pos_arr[4]);
        // std::vector<Orc>::iterator iterator = orkowie.begin();
        // int bo_iterator_nie_dziala=size-1;
        // while(iterator != orkowie.end() -1){
        //     for(int i=4; i>-1;i--){
        //         if(bo_iterator_nie_dziala == orc_pos_arr[i]){
        //             orkowie.erase(iterator);
        //         };

        //     }
        //     ++iterator;
        //     bo_iterator_nie_dziala--;
        // }
    }  
};


void show_members(std::vector<Orc> &orkowie, int size){
    for(int i=0; i<size; i++){
        orkowie[i].show_name();
        orkowie[i].show_health();        
    }
}


double calculate_position(int x1, int x2, int y1, int y2){
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}

int main(void){
    srand(time(NULL));
    Wizzard DiamondNever(100, 0, 0);
    std::vector<Orc> oddzial;
    for(int i=0; i<20;i++){
        oddzial.push_back(Orc(100, rand(), rand()));
        oddzial[i].set_name(std::to_string(i));
    }
    std::vector<Orc> &odzial_ref = oddzial;
    show_members(odzial_ref, oddzial.size());
    DiamondNever.ball_of_fire(odzial_ref, oddzial.size());
    show_members(odzial_ref, oddzial.size());
    
}