#include <iostream>

struct Student{
    std::string imie;
    std::string nazwisko;
    std::string nr_indeksu;
};
int main(void){
    Student Koral;
    Koral.imie = "Karol";
    Koral.nazwisko = "Nosek";
    Koral.nr_indeksu = "11111";
    Student Boral{
        "a","b","c"
    };
    std::cout << Koral.imie << " " << Koral.nazwisko << " " << Koral.nr_indeksu << std::endl;
    std::cout << Boral.imie << " " << Boral.nazwisko << " " << Boral.nr_indeksu;
    return 0;
}