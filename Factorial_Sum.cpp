//Sum of naturals divisible by 3 and 5
#include <iostream>
using namespace std;

int main()
{
    unsigned int limit = 0;
    cout << "Enter the Limit" << endl;
    cin >> limit;
    unsigned long long sum = 0;
    for (unsigned int i = 3 ; i < limit ; i++)
    {
        if (i%3 == 0 || i%5 == 0) {
            sum += i;
        }
    }

    std::cout << "The sum is " << sum << endl;
    return 0;
}