#include <iostream>

template <class T>
T getmax(T a, T b){
    return a>b ? a:b;
}

template <class arr>
arr getmax(arr a[], int l){
    arr temp = 0;
    for(int i=0;i<l;i++){
        if(a[i]>temp){
            temp = a[i];
        }
    }
    return temp;
}


int main(void){
    float *array;
    int n;
    std::cout << "Podaj rozmiar tablicy" << std::endl;
    std::cin >> n;
    array = new float[n];
    std::cout << std::endl << "Podaj elementy tablicy" << std::endl;
    for(int i=0;i<n;i++){
        std::cin >> array[i];
    }
    std::cout << getmax<float>(array, n);
}