## 🏩 Student Information System (SIS) — C++ OOP Prototype

### 👋 **Project Overview**

This project is a **prototype Student Information System (SIS)** developed as part of an **Object-Oriented Programming (OOP)** assignment for **TechVision Pvt. Ltd.**

The system demonstrates how **OOP principles** such as **encapsulation, abstraction, constructors, destructors, and method overloading** can be applied to model real-world entities like students in C++.

---

### 🎯 **Learning Objectives**

* Understand and implement **encapsulation** through private attributes and public getters/setters
* Apply **abstraction** using methods like `calculateGrade()`
* Demonstrate **constructor overloading** and **default arguments**
* Use **destructors** to manage object lifecycle
* Separate code into **header**, **implementation**, and **main** files for clean structure

---

### 🧩 **Class Design**

#### 🏷️ Class Name: `Student`

**Private Attributes**

* `name` : `string`
* `age` : `int`
* `rollNo` : `int`
* `gpa` : `float`

**Public Methods**

* `Student()` — Default constructor
* `Student(string, int, int, float=0.0)` — Parameterized constructor (with default argument)
* `~Student()` — Destructor
* Getter and Setter methods for all attributes
* `calculateGrade()` — Returns letter grade based on GPA
* `displayInfo()` — Displays complete student information

---

### 📊 **UML Class Diagram**

```
+------------------------------+
|           Student            |
+------------------------------+
| - name : string              |
| - age : int                  |
| - rollNo : int               |
| - gpa : float                |
+------------------------------+
| + Student()                  |
| + Student(string, int, int, float=0.0) |
| + ~Student()                 |
| + setName(string) : void     |
| + getName() : string         |
| + setAge(int) : void         |
| + getAge() : int             |
| + setRollNo(int) : void      |
| + getRollNo() : int          |
| + setGPA(float) : void       |
| + getGPA() : float           |
| + displayInfo() : void       |
| + calculateGrade() : string  |
+------------------------------+
```

---

### ⚙️ **Grading Criteria (GPA to Grade Mapping)**

| GPA Range  | Grade |
| ---------- | ----- |
| 3.7 – 4.0  | A     |
| 3.0 – 3.69 | B     |
| 2.0 – 2.99 | C     |
| 1.0 – 1.99 | D     |
| Below 1.0  | F     |

---

### ✅ **Input Validation**

To ensure data integrity:

* `age` must be greater than 0
* `rollNo` must be positive
* `gpa` must be between 0.0 and 4.0
* `name` must not be empty

Invalid inputs automatically set **default safe values** and display a warning message.

---

### 📂 **Project Structure**

```
📁 StudentInformationSystem/
│
├── Student.h        → Class declaration (header file)
├── Student.cpp      → Class implementation (function definitions)
├── main.cpp         → Object creation and testing
├── README.md        → Project documentation
└── output.png       → (Optional) Screenshot of program output
```

---

### 💻 **Sample Output**

```
===== Student Information System Prototype =====

Default constructor called for student.
--------------------------------
Name: Ali | Age: 20 | Roll No: 101 | GPA: 3.8 | Grade: A
Parameterized constructor called for Sara.
--------------------------------
Name: Sara | Age: 19 | Roll No: 102 | GPA: 3.1 | Grade: B
Parameterized constructor called for Usman.
--------------------------------
Name: Usman | Age: 21 | Roll No: 103 | GPA: 2.5 | Grade: C

===== End of Program =====
Destructor called for student: Usman
Destructor called for student: Sara
Destructor called for student: Ali
```

---

### 🧠 **Concepts Demonstrated**

* **Encapsulation:** All attributes are private with getter/setter methods
* **Abstraction:** Users don’t need to know how grades are calculated
* **Constructor Overloading:** Default and parameterized constructors
* **Destructor:** Displays message when objects are destroyed
* **Separation of Concerns:** Header, source, and main files

---

### 👨‍💻 **Author**

**Name:** Zamad Shakeel 
**Roll No:** L1F24BSAI0092
**Course:** Object-Oriented Programming (OOP)
**Instructor:** Iqra Tariq
