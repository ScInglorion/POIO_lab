#include <iostream>
using namespace std;
class Rectangle{
private:
    static int numberOfInstances;
public:
    Rectangle(){
        numberOfInstances++;
    };
    int get_numberOfInstances(){
        return numberOfInstances;
}   ;
};
// WAZNE!!! Pola statyczne nalezy zadeklarowac w miejscu, w tkorym
//deklarujemy zmienne globalne

int Rectangle::numberOfInstances = 0;

int main(){
    Rectangle r1, r2, r3;
    cout << "So far " << r1.get_numberOfInstances() << " Rectangular objects have been created" <<endl;
    return 0;
}
