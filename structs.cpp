#include <iostream>
#include <limits>
#include <cmath>
#include <ctime>

struct student{
    std::string name;
    double gpa;
    // We can set default value as seen below
    bool enrolled = true;
};

int main() {

    // struct = A structure that group related variables under one name
    //          structs can contain many different data types (string, int, double, bool, etc.)
    //          variables in a struct are known as "members"
    //          members can be access with . "Class Member Acess Operator"

    student student1;
    student1.name = "Arjun";
    student1.gpa = 3.1;

    student student2;
    student2.name = "Krishna";
    student2.gpa = 3.8;

    student student3;
    student3.name = "Vishnu";
    student3.gpa = 4.0;

    std::cout << "\nStudent name: " << student1.name << '\n';
    std::cout << "GPA: " << student1.gpa << '\n';
    std::cout << "Enrolled: " << student1.enrolled << '\n';

    std::cout << "\nStudent name: " << student2.name << '\n';
    std::cout << "GPA: " << student2.gpa << '\n';
    std::cout << "Enrolled: " << student2.enrolled << '\n';

    std::cout << "\nStudent name: " << student3.name << '\n';
    std::cout << "GPA: " << student3.gpa << '\n';
    std::cout << "Enrolled: " << student3.enrolled << '\n';

    return 0;

}