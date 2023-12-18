#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number, tmp_number, sum_of_digits = 0;
    cin >> number;
    tmp_number = number;

    while (tmp_number > 0)
    {
        sum_of_digits += tmp_number % 10;
        tmp_number /= 10;
    }

    int prime_checker = 0;
    number++;

    while (prime_checker < sum_of_digits)
    {
        bool is_prime = true;
        for (int i = 2; i <= sqrt(number); i++)
        {
            if (number % i == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime)
            prime_checker++;

        number++;
    }

    cout << --number << endl;

    return 0;
}