#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int sum = 0, number_of_divisors = 0;

    for (int number = 1; number <= n; number++)
    {

        // for the number itself
        sum += number;
        number_of_divisors++;

        // for range of 1 to number/2
        for (int divisor = 1; divisor <= number / 2; divisor++)
        {
            if (number % divisor == 0)
            {
                sum += divisor;
                number_of_divisors++;
            }
        }
    }

    cout << number_of_divisors << " " << sum << endl;

    return 0;
}