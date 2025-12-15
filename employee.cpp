#include "employee.hpp"

// реализация методов Employee
Employee::Employee(string n, int i, double s) {
    name = n;
    id = i;
    salary = s;
}

string Employee::getName() {
    return name;
}

int Employee::getId() {
    return id;
}

double Employee::getSalary() {
    return salary;
}

void Employee::setSalary(double newSalary) {
    salary = newSalary;
}