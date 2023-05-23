#include <iostream>
using namespace std;

class Rectangle {
    private:
        int width, height;
    public:
        /*declaring the functions wich can be called:
        * two parameters, deconstructor */
        Rectangle (int,int);
        Rectangle (int);
        ~Rectangle();
        int area (void);
};
/* Constructor with two parameters */
Rectangle::Rectangle (int a, int b) {
    width = a;
    height = b;
}
/* Constructor with one parameter */
Rectangle::Rectangle (int a) {
    width = a;
    height = a;
}
/*Deconstructor*/
Rectangle::~Rectangle(void){
    cout << "Object is being deleted" << endl;
}

int Rectangle::area (void) {return (width*height);}


int main () {
    Rectangle rect (3,4); // constructor with two argument
    Rectangle square (4); // constructor with two argument
    cout << "rect area (two param.): " << rect.area() << endl;
    cout << "rect area (one param.): " << square.area() << endl;
    return 0;
}