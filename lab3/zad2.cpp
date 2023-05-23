#include <iostream>
#include <cmath>


class Rectanlge{
    int sidea;
    int sideb;
    int sidec;
    public:
        Rectanlge();
        Rectanlge(double, double, double);
        ~Rectanlge();
        double area();
};

Rectanlge::Rectanlge() : sidea(3), sideb(4), sidec(5){
    std::cout << "\nZ uwagi na brak danych zostal utworzony trojkat egipski" << std::endl;
}
Rectanlge::Rectanlge(double a, double b, double c) : sidea(a), sideb(b), sidec(c){}
double Rectanlge::area(){
    return 0.5*sidea*sideb*acos((sidea*sidea+sideb*sideb-sidec*sidec)/(2*sidea*sideb));
}
Rectanlge::~Rectanlge(){
    std::cout << "\nZostal usuniety trojkat o bokach: " << sidea << " " << sideb << " "<< sidec << std::endl;
}
int main(void){
    std::cout << "Podaj wartosci bokow pierwszego trojkata" << std::endl;
    int a;
    int b;
    int c;
    std::cin >> a >> b >> c;
    Rectanlge rec1(a, b, c);
    std::cout << "Podaj wartosci bokow drugiego trojkata" << std::endl;
    std::cin >> a >> b >> c;
    Rectanlge rec2(a, b, c);
    std::cout << "Pole pierwszego trojkata: " << rec1.area() << "\nPole drugiego trojkata " << rec2.area() << std::endl;
}