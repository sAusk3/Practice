#include<iostream>
#include<fstream>
using namespace std;

ifstream f("data.in");
ofstream g("data.out");

int main()
{
    int a,b,sum=0;
    f>>a>>b;
    sum=a+b;
    g<<sum;
    return 0;
}