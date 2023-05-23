#include <iostream>

class Student{
    std::string firstName;
    std::string lastName;
    std::string indexNumber;
public:
    Student();
    Student(std::string, std::string, std::string);
    void set_firstName(std::string);
    void set_lastName(std::string);
    void set_indexNumber(std::string);
    std::string get_firstName();
    std::string get_lastName();
    std::string get_indexNumber();
};

Student::Student(){}
Student::Student(std::string name, std::string surname, std::string index) : firstName(name), lastName(surname), indexNumber(index){}
void Student::set_firstName(std::string name){
    firstName = name;
}
void Student::set_lastName(std::string surname){
    lastName = surname;
}
void Student::set_indexNumber(std::string index){
    indexNumber = index;
}
std::string Student::get_firstName(){
    return firstName;
}
std::string Student::get_lastName(){
    return lastName;
}
std::string Student::get_indexNumber(){
    return indexNumber;
}

int main(void){
    Student Koral("Karol", "Nosek", "123456");
    std::cout << "Imie: " << Koral.get_firstName() << " Nazwisko: " << Koral.get_lastName() << " Nr inedksu: " << Koral.get_indexNumber() << std::endl;
    Koral.set_firstName("Kamil");
    Koral.set_lastName("Kamil");
    Koral.set_indexNumber("654321");
    std::cout << "Imie: " << Koral.get_firstName() << " Nazwisko: " << Koral.get_lastName() << " Nr inedksu: " << Koral.get_indexNumber() << std::endl;

    
    
}