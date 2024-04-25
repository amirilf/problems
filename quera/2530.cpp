#include <iostream>

using namespace std;

int main()
{

    string str;
    cin >> str;

    // default sentence
    int moods = 1;

    for (int i = 0; str[i]; i++)
    {
        if (str[i] == 'T' || str[i] == 'D' || str[i] == 'L' || str[i] == 'F')
        {
            moods *= 2;
        }
    }

    cout << moods << endl;

    return 0;
}
