#include <iostream>
#include <vector>
using namespace std;

void print_dec2bin(int num){
    std::vector<int> vec;
    int reminder; // reminder after division - reszta z dzielenia
    cout << "Decimal " << num << " equals to " ;
    
 while (num > 0){
    reminder = num % 2; // oblicz resztę z dzielenia przez 2
    vec.push_back(reminder);
    num = (num - reminder) / 2;
 }

 for(int i = 0;i<vec.size();i++){
    cout << vec[vec.size()-1-i];
 }
 cout<< " in binary." << endl;
}
int main(){
 int num = 18;
 print_dec2bin(num);
 return 0;
}