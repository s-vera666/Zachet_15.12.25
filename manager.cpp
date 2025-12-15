#include "manager.hpp"

// конструктор Manager
Manager::Manager(string n, int i, double s, string d) 
    : Employee(n, i, s) {
    department = d;
}

// новая зарплата (надбавка 10%)
double Manager::getSalary() {
    return Employee::getSalary() * 1.1;
}

string Manager::getDepartment() {
    return department;
}