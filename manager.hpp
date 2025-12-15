#pragma once

#include "employee.hpp"
#include <string>
using namespace std;

class Manager : public Employee {
private:
    string department;

public:
    // конструктор
    Manager(string n, int i, double s, string d);
    
    // новая зарплата
    double getSalary();
    
    // метод для отдела
    string getDepartment();
};