#include <iostream>

double mean(int size, int arr[] );

int main(void){
    int *marks = nullptr;
    int num;   
    std::cout << "Ile chcesz wpisac ocen?" << std::endl;
    std::cin >> num;
    marks = new int[num];
    std::cout << "\nwpisz oceny:"<< std::endl;
    for(int i=0;i<num;i++){
        std::cin >> marks[i];
    }
    std::cout << "Srednia wynosi: " << mean(num, marks);  


}

double mean(int size, int arr[] ){
    int temp = 0;
    for(int i=0; i<size;i++){
        temp += arr[i];
    }
    
    return temp/size;
}