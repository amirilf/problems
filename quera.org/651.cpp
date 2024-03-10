#include <iostream>
#include <string>

using namespace std;

int power(int a, int b)
{
    int result = 1;
    for (int i = 0; i < b; i++)
        result *= a;

    return result;
}

bool checkReverse(string str)
{

    int length = str.length();

    for (int i = 0; i < length / 2; i++)
        if (str[i] != str[length - i - 1])
            return false;
    return true;
}

int main()
{
    int number, fBase, sBase;
    cin >> number >> fBase >> sBase;

    int base10 = 0;
    if (fBase != 10)
    {
        // first base to base 10
        for (int i = 0; number > 0; i++)
        {
            base10 += power(fBase, i) * (number % 10);
            number /= 10;
        }
    }
    else
        base10 = number;

    // base10 to second base
    int result = 0;
    int index = 0;
    while (base10 > 0)
    {
        result += (base10 % sBase) * power(10, index++);
        base10 /= sBase;
    }

    // check being palindrome
    if (checkReverse(to_string(result)))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}