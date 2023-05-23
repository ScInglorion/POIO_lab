#include <iostream>

void minmax(int size, int arr[], int &lowest, int &highest);

int main(void){
    int arrnum[] = {4,2,3,4,5,6,7,8,9,10};
    int arrsize = sizeof(arrnum)/sizeof(int);
    int low;
    int high;
    minmax(arrsize, arrnum, low, high);
    std::cout << low << std::endl;
    std::cout << high << std::endl;
    return 0;

}

void minmax(int size, int arr[], int &lowest, int &highest){
    lowest = arr[0];
    highest = arr[0];
    for(int i=1; i<size;i++){
        if(arr[i] < lowest){
            lowest = arr[i];
        }
        if(arr[i] > highest){
            highest = arr[i];
        }
    }

}