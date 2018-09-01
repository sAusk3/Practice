#include <iostream>
#include <set>
#include <cmath>

using namespace std;

int sum_proper_divisors(int const number)
{
    int result = 1;
    for (int i = 2; i <= sqrt(number); ++i)
    {
        if (number % i == 0) {
            result += (i == (number/i)) ? i : ( i + number / i);
        }
    }

    return result;
}

void print_amicables(int const limit)
{
    for (int number = 4; number < limit; ++number)
    {
        int sum1 = sum_proper_divisors(number);

        if (sum1 < limit) {
            int sum2 = sum(sum_proper_divisors(sum1));
            if(sum2 == number && number != sum1) {
                cout << number << "," << sum1 << endl;
            }
        }
    }
}

void print_amicables_once(int const limit)
{
    set<int> printed;
    for (int number = 4; number < limit, ++number)
    {
        if (printed.find(number) != printed.end()) continue;

        auto sum1 = sum_proper_divisors(number);

        if( sum1 < limit) {
            int sum2 = sum_proper_divisors(sum1);

            if (sum2 == number && number != sum1)
            {
                printed.insert(number);
                printed.insert(sum1);

                std::cout << number << "," << sum1 << std::endl;
            }
        }
    }
}

int main()
{
    print_amicables(100000);
    print_amicables_once(100000);
}