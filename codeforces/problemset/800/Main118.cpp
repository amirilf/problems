#include <iostream>

using namespace std;

int main()
{
    char str[110];
    cin >> str;

    for (int i = 0; str[i]; i++)
    {
        char c = str[i];
        if (!(c == 'A' || c == 'U' || c == 'O' || c == 'E' || c == 'Y' || c == 'I' || c == 'a' || c == 'u' || c == 'o' || c == 'e' || c == 'y' || c == 'i'))
        {
            cout << '.';
            if (c > 91)
                cout << c;
            else
                cout << (char)(c + 32);
        }
    }
    cout << endl;

    return 0;
}