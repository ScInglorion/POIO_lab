#include <iostream>
using namespace std;
/*Definicja klasy Box -. */
class Box
{
 private:
    double sidea, sideb;
 public:
    Box (double, double);
    double area () {
        return (sidea*sideb);
    }
};
/*defining class Cube, which is based on class Box*/
class Cube {
        Box base;
        double height;
    public:
        Cube (double a, double b, double height ):base(a,b),height(height)
        {}
        double volume()
        {return base.area() * height;}
};
/* Specjalna metoda klasy zwana kostruktorem. Jest ona wywoływana zawsze gdy
nowy obiekt jest tworzony.
Nazwa konstruktora jest taka sama jak nazwa klasy. Metoda ta nie zwraca
zadnego typu – nawet void.
*/
Box::Box (double a, double b) : sidea(a),sideb(b){}
int main( )
{
 double a,b,d;
 a = 5; b = 4; d = 100;
/*klasa "Box" ma jedną instancę "foo". */
 Cube foo (a,b,d);

 cout << "volume box: " << foo.volume() << endl;
return 0;
}
