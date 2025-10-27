// Student.cpp
#include <iostream>
#include "Student.h"
using namespace std;

// -----------------------------
// Default Constructor
// -----------------------------
Student::Student() {
    name = "Unknown";
    age = 0;
    rollNo = 0;
    gpa = 0.0;
    cout << "Default constructor called for student.\n";
}

// -----------------------------
// Parameterized Constructor (Overloaded)
// -----------------------------
Student::Student(string n, int a, int r, float g) {
    name = n;
    age = a;
    rollNo = r;
    gpa = g;
    cout << "Parameterized constructor called for " << name << ".\n";
}

// -----------------------------
// Destructor
// -----------------------------
Student::~Student() {
    cout << "Destructor called for student: " << name << "\n";
}

// -----------------------------
// Setters (Encapsulation)
// -----------------------------
void Student::setName(string n) { name = n; }
void Student::setAge(int a) { age = a; }
void Student::setRollNo(int r) { rollNo = r; }
void Student::setGPA(float g) { gpa = g; }

// -----------------------------
// Getters (Encapsulation)
// -----------------------------
string Student::getName() { return name; }
int Student::getAge() { return age; }
int Student::getRollNo() { return rollNo; }
float Student::getGPA() { return gpa; }

// -----------------------------
// Abstraction: Grade Calculation
// -----------------------------
string Student::calculateGrade() {
    if (gpa >= 3.7) return "A";
    else if (gpa >= 3.0) return "B";
    else if (gpa >= 2.0) return "C";
    else return "F";
}

// -----------------------------
// Display Student Information
// -----------------------------
void Student::displayInfo() {
    cout << "--------------------------------\n";
    cout << "Name: " << name 
         << " | Age: " << age 
         << " | Roll No: " << rollNo 
         << " | GPA: " << gpa 
         << " | Grade: " << calculateGrade() 
         << endl;
}
