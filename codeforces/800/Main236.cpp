#include <iostream>

using namespace std;

int main()
{
    char str[100];
    char diff[100];
    int pointer = 0;
    cin >> str;

    for (int i = 0; str[i]; i++)
    {
        bool is = false;
        for (int j = 0; j < pointer; j++)
        {
            if (diff[j] == str[i])
            {
                is = true;
                break;
            }
        }

        if (!is)
            diff[pointer++] = str[i];
    }

    if (pointer % 2)
        cout << "IGNORE HIM!" << endl;
    else
        cout << "CHAT WITH HER!" << endl;

    return 0;
}