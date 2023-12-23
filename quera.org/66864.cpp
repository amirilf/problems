#include <iostream>
#include <cmath>

using namespace std;

int NumberInRange(int n)
{
    /*
        e.g.
            n = 1  ==> result = 1
            n = 2  ==> result = 21
            n = 3  ==> result = 321
            n = 4  ==> result = 4321
    */

    int result = 0;

    for (int i = 1; i <= n; i++)
    {
        result += i * pow(10, i - 1);
    }

    return result;
}

int main()
{
    /*
        these variables help to find the right place depending on number_digits which means the number of digits (199 => 3 | 2 => 1 | 4432 => 4)
        int number_digits = 1;
        int range_of_numbers = 9 * pow(10, number_digits - 1);
        int first_number = pow(10, number_digits - 1);
        int last_number = pow(10, number_digits) - 1;
        int first_digit_number = (NumberInRange(number_digits - 1) * 9) + 1;
        int last_digit_number = NumberInRange(number_digits) * 9;

        e.g. number_digits = 2
            range is (10,99)
            first_number = 10
            last_number = 99
            first_digit_number = 10 => for the first digit of 10
            last_digit_number = 189 => for the last digit of 99
    */

    int number_digits = 1;

    int n;
    cin >> n;

    while (!(n <= NumberInRange(number_digits) * 9))
        number_digits++;

    int first_number = pow(10, number_digits - 1);
    int first_digit_number = (NumberInRange(number_digits - 1) * 9) + 1;
    int how_much_after_first_number = (n - first_digit_number) / number_digits;
    int digit_index_in_number = (n - first_digit_number) % number_digits;
    int result_number = first_number + how_much_after_first_number;

    cout << to_string(result_number)[digit_index_in_number] << endl;

    return 0;
}
