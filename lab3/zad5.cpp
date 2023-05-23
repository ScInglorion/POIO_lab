#include <iostream>
using namespace std;
struct product {
    int weight;
    double price;
} ;
class Fruit {
public:
    int weight ;
    double price;
};
int main(){
    product apple;
    Fruit banana, melon;
    apple.weight = 1;
    apple.price = 1.23;
    banana.weight = 2;
    banana.price = 2;
    cout << "The price of apple is " << apple.price <<endl;
    cout << "The price of banana is " << banana.price <<endl;
return 0;
}