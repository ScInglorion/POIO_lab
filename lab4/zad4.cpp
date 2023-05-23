#include <iostream>

int main(void){
    std::string wyrazy = "Koral szuka pracy";
    std::cout << "Stringiem jest: " << wyrazy << std::endl;
    std::cout << "Dzialanie substr: (wyraz miedzy miejscami 2 a 5) " << wyrazy.substr(2,5) << std::endl; 
    std::cout << "Dzialanie find: " << wyrazy.find('a', 5) << std::endl; 
    std::cout << "Dzialanie find_first_of: " << wyrazy.find_first_of("kry",3) << std::endl; // Drugi argument informuje od którego miejsca jest szukane
    std::cout << "Dzialanie find_last_of: " << wyrazy.find_last_of("kry",12) << std::endl; // Drugi argument informuje do którego miejsca jest szukane
    std::cout << "Dzialanie insert: " << wyrazy.insert(6,"biedak ") << std::endl; 
    std::cout << "Dzialanie replace: " << wyrazy.replace(0,5, "Kamil") << std::endl; 
    std::cout << "Dzialanie compare: " << wyrazy.compare("Kamil") << std::endl;
}