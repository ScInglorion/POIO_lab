#include <iostream>
#include <cstdlib>
#include <ctime>

void showvelocity(int max_speed, std::string v = "km/h");

int main(void){
    showvelocity(150);
}


void showvelocity(int max_speed, std::string v){
    srand(time(NULL));
    int random = rand() % max_speed;
    std::cout << "Predkosc wynosi " << random << " " << v << std::endl;
}