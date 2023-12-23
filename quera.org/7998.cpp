#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int ascii = 0;

    char result[n];
    int result_index = 0;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        if (str == "CAPS")
        {
            if (ascii)
                ascii = 0;
            else
                ascii = -32;
        }
        else
        {
            result[result_index] = int(str[0]) + ascii;
            result_index++;
        }
    }

    for (int i = 0; i < result_index; i++)
    {
        cout << result[i];
    }
    cout << endl;

    return 0;
}