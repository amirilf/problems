#include <iostream>

using namespace std;

int main()
{
    int num1, num2, multiple = 2;

    cin >> num1 >> num2;

    int rem = num2 % num1;

    while (!((num1 / 2) >= rem && rem >= 0))
    {
        rem = (num2 * multiple) % num1;
        multiple++;
    }

    cout << num2 * --multiple << endl;

    return 0;
}