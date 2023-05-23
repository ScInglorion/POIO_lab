#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>
using namespace std;
class Student {
string name;
int bookNumber;
public:
Student();
Student(string, int);
virtual ~Student();
};
#endif /* STUDENT_H_ */