#include <iostream>
#include <stack>
#include <vector>

void podglad_parkingu(std::stack<std::string> parking){
    std::cout << "\nAuta obecnie na parkingu:\n\n";
    std::string w;
    while(!parking.empty()){
        w = parking.top();
        parking.pop();
        std::cout << w << std::endl;
    }
}   
void give_numbers(std::stack<std::string> &parking, int size, std::string your_number){
    int number = 0;
    int i = 0;
    int arr[size];
    std::cout << std::endl;
    while(number != std::stoi(your_number) && !parking.empty()){
        number = std::stoi(parking.top());
        parking.pop();
        if(number == std::stoi(your_number)){
            break;
        }        
        arr[i] = number;
        std::cout << number << std::endl;        
        i++;
    }
    while (i>0){ // musi tak byc, bo inaczej sprawdzi miejsce -1
        i--;
        parking.push(std::to_string(arr[i])); 
    }
    
    std::cout << "Powyzsze numer to numery wlascicieli samochodow poczawszy od tego najblizej wyjazdu " << std::endl;
}

bool wybor(){
    std::cout << "\nCzy ktos za panem stoi? (y/n)\n";
    bool decyzja;
    char wybor;
    std::cin >> wybor;
    if(tolower(wybor) == 'y'){
        decyzja = true;
    }
    else if (towlower(wybor) == 'n'){
        decyzja = false;
    }
    else{
        while(towlower(wybor) != 'n' && towlower(wybor) != 'y'){
            std::cout << "\nPanie pranksterze, prosze odpowiedziec y lub n" << std::endl; 
            std::cin >> wybor;
            if(tolower(wybor) == 'y'){
                decyzja = true;
            }
            else if (towlower(wybor) == 'n'){
                decyzja = false;
            }                   
        }
    }
    std::cout << std::endl; 
    return decyzja;   
}


int main(void){
    std::stack<std::string> parking;
    std::stack<std::string> &parking_ref = parking;
    std::string telefon;
    std::string twoj_numer;
    bool dojezdni = true;
    bool wyjzedni = true;
    char wyjazd;
    char kolejka;
    char czynnosc;
    while(dojezdni){
        std::cout << "\nDzien dobry\nWitamy w  rezydencji pana informatyka, co chcialbys zrobic?\n1 - Wjechac na parking\n2 - Wyjechac z parkingu\n3 - Sprawdzic stan parkingu\n4 - W sumie to nic, sorry." << std::endl;    
        std::cin >> czynnosc;
        switch (czynnosc)
        {
        case '1':
            std::cout << "\nProsze podac numer telefonu\n";
            std::cin >> telefon;
            parking.push(telefon);
            dojezdni= wybor();
            break;
        case '2':
            std::cout << "\nProsze podac telefonu\n";
            std::cin >> twoj_numer;
            give_numbers(parking_ref, parking.size(), twoj_numer);
            dojezdni= wybor();
            break;
        case '3':
            podglad_parkingu(parking);
            break;
        case '4':
            std::cout << "\nTy pranksterze ty.\n";
            dojezdni = wybor();
            break;
        

        default:
        std::cout << "Prosze wybrac legitny powod\n";
            break;
        }
    }
    

}

