#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>

class Student{
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string name, int age, double gpa){
        // this-> class variable = constructor variable
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }

    void printStudentInfo(){
        std::cout << "Name: " << name << '\n';
        std::cout << "Age: " << age << '\n';
        std::cout << "GPA: " << gpa << '\n';
    }
};

int main() {

    // constructor = special method that is automatically called when an
    // object is instantiated. Useful for assigning values to attributes as
    // arguments.

    Student student1("Krishna", 30, 4.0);
    Student student2("Arjun", 22, 3.0);
    student1.printStudentInfo();
    student2.printStudentInfo();

    return 0;

}