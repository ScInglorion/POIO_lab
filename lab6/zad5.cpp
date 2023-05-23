#include <iostream>
#include <algorithm>
#include <queue>

int main(void){
    char wybor;
    char kontynuacja;
    char dziekan_drzwi;
    char wybor_dziekanatu;
    bool loop = true;
    bool dziekanat = true;
    std::queue<char> rok1;
    std::queue<char> rok2;
    std::queue<char> rok3;
    std::queue<char> rok4;
    std::queue<char> rok5;
    while(loop){
        std::cout << "Dzień dobry, jeśli chcesz się ustawic w kolejce do dziekanatu, prosze wcisnac odpowiedni guzik ";
        std::cout << "\n1 - Rok I\n2 - Rok II\n3 - Rok III\n4 - Rok IV\n5 - Rok V" << std::endl << std::endl;
        std::cin >> wybor;
        switch(wybor){
            case '1':
                rok1.push('P');
                break;
            case '2':
                rok2.push('P');
                break;
            case '3':
                rok3.push('P');
                break;
            case '4':
                rok4.push('P');
                break;  
            case '5':
                rok5.push('P');
                break;
            default:
                std::cout << "\nZostala wybrana nieistniejaca kolejka" << std::endl;                                          
        }
        std::cout << "Czy ktos jeszcze chce stanac w kolejce? (y/n)\n";
        std::cin >> kontynuacja;
        kontynuacja == 'y' ? loop = true : loop = false;
        std::cout << "Czy jakas nowa osoba weszla do dziekanatu? (y/n)\n";
        std::cin >> dziekan_drzwi;
        dziekan_drzwi == 'y' ? dziekanat = true : dziekanat = false;
        if(dziekanat){
            std::cout << "Z ktorej kolejki weszla?\n";
            std::cin >> wybor_dziekanatu;
            switch(wybor_dziekanatu){
            case 'Q':
                rok1.pop();
                break;
            case 'W':
                rok2.pop();
                break;
            case 'E':
                rok3.pop();
                break;
            case 'R':
                rok4.pop();
                break;  
            case 'T':
                rok5.pop();
                break;
            default:
                std::cout << "\nDziekant nie umie w wybieranie kolejki!\n" << std::endl;                                          
        }
        }
    }
    std::cout << "Ilosc osob stojacych w kolejce roku 1: " << rok1.size() << std::endl << "Ilosc osob stojacych w kolejce roku 2: " << rok2.size() << std::endl << "Ilosc osob stojacych w kolejce roku 3: " << rok3.size()  << std::endl << "Ilosc osob stojacych w kolejce roku 4: " <<  rok4.size() << std::endl << "Ilosc osob stojacych w kolejce roku 5: " << rok5.size();
}