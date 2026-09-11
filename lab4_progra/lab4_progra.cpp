#include <iostream>
#include <string>

class Employee {
protected:
    std::string name;
    double baseSalary;

private:
    static int totalEmployees;

public:
    Employee(std::string name, double baseSalary) {
        this->name = name;
        this->baseSalary = baseSalary;

        totalEmployees++;
    }

    static int getTotalEmployees() {
        return totalEmployees;
    }
};

int Employee::totalEmployees = 0;

int main() {

    return 0;
}