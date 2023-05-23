#include <iostream>
int* targetsearch(int arrsize, int arr[], int target);

int main(void){
    int arrnum[] = {7,9,10,3,5,6,2,3,1};
    int size = sizeof(arrnum)/sizeof(int);
    int target = 3;
    int *ptr = targetsearch(size, arrnum, target);
    for(int i=0;i<2;i++){
        std::cout << "Liczba " << i+1 << "a znajduje sie na miejscu " << ptr[i] << std::endl;
    }
    return 0;
}

int* targetsearch(int arrsize, int arr[], int target){
    for(int i=0;i<arrsize;i++){
        int temp = arr[i] - target;
        for(int j=0;j<arrsize;j++){
            if(j==i){
                continue;
            }
            if(arr[j] + arr[i] == target){
                static int found[2] = {i,j};
                return found;
            }
        }
    }
    static int brak[0];
    std::cout << "Pair not found" << std::endl;
    return brak;
}