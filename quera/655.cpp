#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;
        getline(cin >> ws, str);

        bool afterSpace = true;
        for (int charIndex = 0; charIndex < str.length(); charIndex++)
        {
            int index = int(str[charIndex]);

            if (index == 32)
                afterSpace = true;
            else if ((65 <= index && index <= 90) && (!afterSpace))
                str[charIndex] = index + 32;
            else if (afterSpace)
            {
                if ((97 <= index && index <= 122))
                    str[charIndex] = int(str[charIndex]) - 32;
                afterSpace = false;
            }
        }

        cout << str << endl;
    }

    return 0;
}