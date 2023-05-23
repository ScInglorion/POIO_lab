#include <iostream>

int main(void){
    int *p = nullptr;
    int oceny;
    int mean = 0;
    int num = 0;
    std::cout << "Ile ocen jest do wpisania?\n";
    std::cin >> oceny;
    p = new int[oceny];
    for(int i=0; i < oceny;i++){
        std::cout << "co jest oncena nr " << i+1 <<std::endl;
        std::cin >> p[i];
        mean += p[i];
        num++;
    }
    std::cout << "Sredna ocen wynosi: " << mean/num;
}   