#include<iostream>
using namespace std;

int rGCD(int a, int b)
{
    return b == 0 ? a : rGCD(b, a % b);
}

int iGCD(int a, int b)
{
    while(b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int num1, num2;
    cout << "Enter two intergers" << endl;
    cin >> num1 >> num2;
    cout << "GCD for " << num1 << " & " << num2 << " is : " << rGCD(num1, num2) << " - " << iGCD(num1, num2) << endl;
}