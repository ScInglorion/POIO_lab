#include <iostream>
#include <vector>
using namespace std;

void print_dec2bin(int num){
    std::vector<double> vec;
    int reminder; // reminder after division - reszta z dzielenia
    cout << "Decimal " << num << " equals to " ;
    int line;
 while (num > 0){
    reminder = num % 2; // oblicz resztę z dzielenia przez 2
    vec.push_back(reminder);
    num = (num - reminder) / 2;
 }
line = vec.size();
 for(int i = 0;i<vec.size();i++){
    cout << vec[vec.size() -1 -i];
 }
 cout<< " in binary." << endl;
}