#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

int main(void){
    int srand(NULL);
    std::vector<int> vec;
    for(int i =0; i <10;i++){
        vec.push_back(rand());
    }
    for (auto x : vec)
        std::cout << x << " ";     
    sort(vec.begin(), vec.end());
    std::cout << std::endl;
    for (auto x : vec)
        std::cout << x << " ";    
}