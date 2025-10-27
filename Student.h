// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

// -----------------------------
// Class Declaration
// -----------------------------
class Student {
private:
    // Encapsulation: private data members
    string name;
    int age;
    int rollNo;
    float gpa;

public:
    // Constructors and Destructor
    Student(); // Default constructor
    Student(string n, int a, int r, float g = 0.0); // Parameterized with default argument
    ~Student(); // Destructor

    // Setter and Getter methods (Encapsulation)
    void setName(string n);
    string getName();

    void setAge(int a);
    int getAge();

    void setRollNo(int r);
    int getRollNo();

    void setGPA(float g);
    float getGPA();

    // Other Methods (Abstraction)
    void displayInfo();
    string calculateGrade();
};

#endif
