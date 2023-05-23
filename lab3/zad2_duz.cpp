#include <iostream>
#include <cmath>
#include <unordered_map>

//std::unordered_map <int, std::string> slicer(std::string, std::string delimiter = " ");

class Rectangle{
    private:
        double side;
        double side2 = 0;
        double side3;
        double height;
        double angle;
    public:
        Rectangle();
        Rectangle(double);
        Rectangle(double, double);
        Rectangle(double, double, double);
        ~Rectangle();

        double area(); 
};

Rectangle::Rectangle() : side(3), side2(4), side3(5), angle(M_PI/2){
    std::cout << "\nPoniewaz nie zostaly podane parametry, zostal utworzony trojkat egipski (o bokach 3,4,5)" << std::endl;
}
Rectangle::Rectangle(double a) : side(a), height(0.5*a*sqrt(3)){
    std::cout << "\nZ uwagi na podanie jedynie jednej wielkosci zalozono, ze trojkat jest rownoboczny" << std::endl;
}
Rectangle::Rectangle(double a, double h) : side(a), height(h){
    std::cout << "\nZ uwagi na podanie dwoch paramtro, zalozono, ze zostaly podane kolejno bok oraz wysokosc" << std::endl;
}
Rectangle::Rectangle(double a, double b, double c) : side(a), side2(b), side3(c), angle(acos((a*a+b*b-c*c)/(2*a*b))){}
Rectangle::~Rectangle(void){
    if(side2){ 
        std::cout << "\nZostal usuniety trojkat o bokach: " << side << " " << side2 << " "<< side3 << std::endl;
        }
    else{
         std::cout << "\nZostal usuniety trojkat o boku: " << side << " i wysokosci " << height << std::endl;
    }
}
     
double Rectangle::area(){return side2 ? 0.5*side*side2*sin(angle): 0.5*side*height;}    


int main(void){
    int finish = 1;
    int *p = nullptr;
    int num;
    std::string delimiter = " ";
    int problem = 1;
    std::string word = "";    
    std::unordered_map <int, double> slowa = {};
    int k = 0;
    while(problem == 1){
        std::cout << "Podaj wymiary trojka, maksymalnie 3" << std::endl;
        getline(std::cin, word);
        problem = 0;
        int start = 0;
        int end = word.find(delimiter);
        slowa = {};
        while(end != -1){
            if(word == " "){
                break;
            }
            try{
                slowa[k] = stod(word.substr(start, end-start));                        
            }
            catch(std::invalid_argument){
                std::cout << "Niepoprawny typ danych, wpisz poprawne dane" << std::endl;
                problem = 1;
                break;
            }
            
            start = end + delimiter.size();
            end = word.find(delimiter, start);
            k++;
            if(k>2){
                std::cout << "Zostala podana bledna ilosc wymiarow, sprobuj ponownie" << std::endl;                  
                problem = 1;
                break;
            }
        }
        if(word != ""){
            try{
                slowa[k] = stod(word.substr(start, end-start));                
            }
            catch(std::invalid_argument){
                continue;
            }            
        }          
    }
        
    if(word == ""){
        Rectangle rec1;
        std::cout << "Pole trojkata wynosi: " <<  rec1.area();
        return 0;
    }
    if(k == 0){
        double a = slowa.at(0);
        Rectangle rec2(a);
        std::cout << "Pole trojkata wynosi: " <<  rec2.area();
        return 0;
    }
    if(k == 1){
        double a = slowa.at(0);
        double b = slowa.at(1);
        Rectangle rec3(a, b);
        std::cout << "Pole trojkata wynosi: " <<  rec3.area();
        return 0;
    }
    if(k == 2){
        double a = slowa.at(0);
        double b = slowa.at(1);
        double c = slowa.at(2);        
        if (a + b > c && a + c > b && b + c > a){
            Rectangle rec4(a, b, c);
            std::cout << "Pole trojkata wynosi: " <<  rec4.area();            
        }
        else{
            std::cout << "Niepoprawne wymiary, taki trojkat nie istnieje.";
        }        
        return 0;
    }
        return 0;
        
        
}


// fuck this, won't work as i want due to different return types
//int error - 1
/*std::unordered_map <int, std::string> slicer(std::string word, std::string delimiter){
    int start = 0;
    int end = word.find(delimiter);
    std::unordered_map <int, std::string> slowa = {};
    int k = 0;
    while(end != -1){
        slowa[k] = word.substr(start, end-start);
        start = end + delimiter.size();
        end = word.find(delimiter, start);
        std::cout << slowa[k] << std::endl;
        k++;

    }
    slowa[k] = word.substr(start, end-start);
    std::cout << slowa[k];
    error = 0;
    return slowa;
}   */