#include <iostream>
#include "Employee.h"

using namespace std;
using namespace Records;

int main()
{
    cout<< "Testing the Employee Class." << endl;
    Employee emp;
    emp.setFirstName("Rakesh");
    emp.setLastName("Singh");
    emp.setEmployeeNumber(101);
    emp.setSalary(50000);
    emp.promote();
    emp.promote(100);
    emp.hire();
    emp.display();
    return 0;
}