#include <iostream>
#include <stdexcept>
#include <exception>
#include "Database.h"

using namespace std;
using namespace Records;

int displayMenu();
void doHire(Database& db);
void doFire(Database& db);
void doPromote(Database &db);
void doDemote(Database &db);

int main()
{
    Database employeeDB;
    bool done = false;
    while (!done) {
        int selection = displayMenu();
        switch (selection) {
            case 0:
            done = true;
            break;
            case 1:
            doHire(eployeeDB);
            break;
            case 2:
            doFire(employeeDB);
            break;
            case 3:
            doPromote(employeeDB);
            break;
            case 4:
            doDemote(employeeDB);
            break;
            case 5:
            employeeDB.displayAll();
            break;
            default:
            cerr << "Unknown Command. " << endl;
            break;
        }
    }
    return 0;
}

int displayMenu()
{
    int selection;
    cout << endl;
    cout << "Employee Database" << endl;
    cout << "------------------" << endl;
    cout << "1. Hire a new Empoyee" << endl;
    cout << "2. Fire an Employee" << endl;
    cout << "3. Promote an Employee" << endl;
    cout << "4. Demote an Employee" << endl;
    cout << "5. Display all the Employees" << endl;
    cout << "0. Quit" << endl;
    cout << "---> ";
    cin >> selection;
    return selection;
}

void doHire(Database& db)
{
    string firstName;
    string lastName;
    cout << "First Name? ";
    cin >> firstName;
    cout << "Last Name? ";
    cin >> lastName();

    db.addEmployee(finstName, lastName);
}

void doFire(Database& db)
{
    int employeeNumber;
    cout << "Employee Number? ";
    cin >> employeeNumber;

    try {
        Employee& emp = db.getEmployee(employeeNumber);
        emp.fire();
        cout << "Employee " << employeeNumber << " terminated." << endl;
    } catch (const std::logic_error& exception) {
        cerr << "Unable to terminate employee : " << exception.what() << endl;
    }
}