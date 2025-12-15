#include <iostream>
#include "employee.hpp"
#include "manager.hpp"
using namespace std;

int main() {

    // массив указателей на Employee
    Employee* employees[4];
    
    // 2 сотрудника
    employees[0] = new Employee("Nicolas", 1, 100000);
    employees[1] = new Employee("Alex", 2, 70000);
    
    // 2 менеджера
    employees[2] = new Manager("Rose", 3, 45000, "Test");
    employees[3] = new Manager("Pavel", 4, 50000, "Marketing");
    
    // вывод зарплаты сотрудников

    for (int i = 0; i < 4; i++) {
        // Для Employee вызывается Employee::getSalary()
        // Для Manager вызывается Manager::getSalary()
        cout << employees[i]->getName() << " " << employees[i]->getSalary() << " руб" << endl;
    }
    
    cout << endl;
    
    // очищаем память (из-за динамического массива)
    for (int i = 0; i < 4; i++) {
        delete employees[i];
    }
    
    return 0;
}