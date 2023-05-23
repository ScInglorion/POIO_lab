#include <iostream>

int main(void){
    std::string ciag= "Koral";
    std::cout << "Nasz string to " << ciag << std::endl;
    std::cout << "Funckja size(): " << ciag.size()  << std::endl;
    std::cout << "Funckja length(): " << ciag.length()  << std::endl;
    std::cout << "Funckja empty(): " << ciag.empty()  << std::endl;
    std::string cigre = ciag;
    ciag.resize(3);
    std::cout << "Funckja resize(): " << ciag  << std::endl;
    cigre.clear();
    std::cout << "Funckja clear(): " << cigre  << std::endl;
}