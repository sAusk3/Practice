
//just some basic handson on stl swap and max functions
#include<iostream>
#include<utility>
using namespace std;

int main()
{
    int a=5, b=10;
    cout<<"a and b before swap are "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"a and b after swap are "<<a<<" "<<b<<endl;
    cout<<"maximum is "<<max(a,b)<<endl;
    return 0;
}