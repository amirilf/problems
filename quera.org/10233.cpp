#include <iostream>

using namespace std;

int main()
{
    int ascii_diff = 48;
    string number;
    cin >> number;
    int length = number.length();

    int first_digit = (int)number[length - 1] - ascii_diff;

    for (int i = length - 1; i >= 0; i--)
    {
        cout << number[i] << " ";
    }

    return 0;
}