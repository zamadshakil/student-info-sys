// main.cpp
#include <iostream>
#include "Student.h"
using namespace std;

int main() {
    cout << "===== Student Information System Prototype =====\n\n";

    // Object 1: Default Constructor
    Student s1;
    s1.setName("Ali");
    s1.setAge(20);
    s1.setRollNo(101);
    s1.setGPA(3.8);
    s1.displayInfo();

    // Object 2: Parameterized Constructor (with all parameters)
    Student s2("Sara", 19, 102, 3.1);
    s2.displayInfo();

    // Object 3: Parameterized Constructor (using default GPA)
    Student s3("Usman", 21, 103);
    s3.setGPA(2.5);
    s3.displayInfo();

    cout << "\n===== End of Program =====\n";

    return 0;
}
