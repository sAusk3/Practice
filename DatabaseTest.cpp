#include <iostream>
#include "Database.h"

using namespace std;
using namespace Records;

int main()
{
    Database myDB;
    Employee& emp1 = myDB.addEmployee("falooda", "walooda");
    emp1.fire();

    Employee& emp2 = myDB.addEmployee("himachal", "Pradesh");
    emp2.setSalary(100000);

    Employee& emp3 = myDB.addEmployee("John", "Wick");
    emp3.setSalary(10000);
    emp3.promote();

    cout << endl << "All Employees: " << endl;
    myDB.displayAll();

    cout << endl << "current employees: " << endl;
    myDB.displayCurrent();

    cout << endl << "Former Employees: " << endl;
    myDB.displayFormer(); 
}
