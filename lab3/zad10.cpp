#include <iostream>

int num = 0;

void printHello(){
    std::cout << "Hello World\n";
    num += 1;
}

int main(void){
    for(int i=0; i<10; i++){
        printHello();
    }
    std::cout << "\nFunkcja printHello zostala wywolana " << num << " razy.";
}