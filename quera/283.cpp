#include <iostream>

using namespace std;

string operator*(string a, unsigned int b)
{
    string result = "";
    while (b--)
        result += a;
    return result;
}

int main()
{

    int a, b;
    cin >> a >> b;

    string star = "* ";
    string space = "  ";

    if (b >= a)
        cout << "Wrong order!" << endl;
    else if ((a - b) % 2 != 0)
        cout << "Wrong difference!" << endl;
    else
    {
        int diff = (a - b) / 2;

        for (int i = 0; i < diff; i++)
            cout << (star * a) << endl;

        for (int i = 0; i < b; i++)
            cout << (star * diff) << (space * b) << (star * diff) << endl;

        for (int i = 0; i < diff; i++)
            cout << (star * a) << endl;
    }

    return 0;
}