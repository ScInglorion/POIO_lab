#include "Student.h"
Student::Student() {
name = "none";
bookNumber = 000000;
}
Student::Student(string n, int number) {
name = n;
bookNumber = number;
}
Student::~Student() {
// TODO Auto-generated destructor stub
}
