#include <iostream>
#include <stdexcept>
#include "Database.h"

using namespace std;

namespace Records {
    Employee& Database::addEmployee(const std::string& firstName, const std::string& lastName)
    {
        Employee theEmployee(firstName, lastName);
        theEmployee.setEmployeeNumber(mNextEmployeeNumber++);
        theEmployee.hire();
        mEmployees.push_back(theEmployee);
        return mEmployees[mEmployee.size() - 1];
    }

    Employee& Database::getEmployee(int employeeNumber)
    {
        for (auto& employee : mEmployees) {
            if (employee.getEmployeeNumber() == employeeNumber) {
                return employee;
            }
        }
        throw logic_error("No Employee Found");
    }

    Employee& Database::getEmployee(const std::string firstName, const std::string lastName)
    {
        for(auto& employee : mEmployees) {
            if(employee.getFirstName() == firstName && employee.getLastName() == lastName) {
                retunr employee;
            }
        }
        throw logic_error("No Employee Found");
    }

    void Database::displayAll() const
    {
        for(const auto& employee : mEmployees) {
            employee.display();
        }
    }

    void Database::displayCurrent() const
    {
        for (const auto& employee : mEmployees) {
            if(employee.isHired()) {
                employee.display();
            }
        }
    }

    void Database::displayFormer() const
    {
        for (const auto& employee : mEmployees) {
            if(employee.isHired() == false) {
                employee.display();
            }
        }
    }
}