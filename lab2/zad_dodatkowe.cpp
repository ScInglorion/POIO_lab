#include <iostream>
#include <string>
#include <unordered_map>

int roman_conversion(std::string);

int main(void){
    int num;
    int stop = 1;
    while(true){
        std::string liczba;
        std::cin >> liczba;
        std::cout << roman_conversion(liczba) << std::endl;
        if(liczba == "stop"){
            break;
        }
    }
}

int roman_conversion(std::string roman_num){
    int num=0;
    for(int i=0;i<roman_num.length()+1;i++){
        if (i == roman_num.length()){
            break;
        }
        switch(roman_num[i]) {
            case 'I':
                if(roman_num[i+1]=='\0' || roman_num[i+1]== 'I'){
                    num +=1;
                }
                else{
                    num -=1;
                }
                break;
            case 'X':
                if(roman_num[i+1]=='C' || roman_num[i+1]=='L'){
                    num -=10;
                }
                else{
                    num +=10;
                }
                break;
            case 'V':
                num +=5;
                break;
            case 'L':
                num +=50;
                break;
            case 'C':
                if(roman_num[i+1]=='D' || roman_num[i+1]== 'M'){
                    num -=100;
                }
                else{
                    num +=100;
                }
                break;
            case 'D':
                num +=500;
                break;
            case 'M':
                num +=1000;
                break;
            default:
                std::cout << "yo";
}
    }
return num;
}