#pragma once

#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    double salary;

public:
    // конструктор, инициализирующий все поля
    Employee(string n, int i, double s);
    
    // геттеры (методы получения значений) для всех полей
    string getName();
    int getId();
    double getSalary();
    // сеттер (метод установки значения) для поля salary
    void setSalary(double newSalary);
};