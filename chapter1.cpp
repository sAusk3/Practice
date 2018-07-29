#include<iostream>
using namespace std;

int count_x(char*p, char x)
//count the number of occurences in x in p[]
//p is assumed to be a zero terminated arry of char
{
    if (p == nullptr)
        return 0;
    int count = 0;
    for (; *p!=0; ++p)
        if(*p == x)
            ++count;
    return count;
}
int main()
{

}