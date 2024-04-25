#include <iostream>

using namespace std;

int main()
{
    int counter = 0;

    for (int i = 0; i < 5; i++)
    {
        int value;
        cin >> value;

        if (value >= 80)
            counter++;
    }

    if (counter >= 3)
        cout << "Mamma mia!" << endl;
    else if (counter >= 1)
        cout << "Mamma mia!!" << endl;
    else
        cout << "Mamma mia!!!" << endl;

    return 0;
}