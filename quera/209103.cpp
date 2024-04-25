#include <iostream>

using namespace std;

string multiply_str(string str, int count)
{
    string tmp = str;
    for (int i = 0; i < count; i++)
    {
        str += tmp;
    }

    return str;
}

int main()
{
    int row, col;
    cin >> row >> col;

    cout << multiply_str(" _", col - 1) << endl;
    for (int i = 0; i < row; i++)
    {

        cout << multiply_str("| ", col) << endl;
        cout << multiply_str(" _", col - 1) << endl;
    }

    return 0;
}