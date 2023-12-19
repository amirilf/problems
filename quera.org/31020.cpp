#include <iostream>

using namespace std;

int main()
{

    int num1, num2;
    cin >> num1 >> num2;

    if (num1 % num2 != 0)
        cout << (num1 / num2) + 1 << endl;
    else
        cout << num1 / num2 << endl;

    return 0;
}