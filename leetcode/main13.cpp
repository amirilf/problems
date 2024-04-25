#include <iostream>

using namespace std;

int romanToInt(string s)
{
    int res = 0;
    for (int i = 0; i < s.length(); i++)
    {

        switch (s[i])
        {
        case 'I':
            switch (s[i + 1])
            {
            case 'V':
                i++;
                res += 4;
                break;
            case 'X':
                i++;
                res += 9;
                break;
            default:
                res++;
                break;
            }
            break;
        case 'V':
            res += 5;
            break;
        case 'X':
            switch (s[i + 1])
            {
            case 'L':
                i++;
                res += 40;
                break;
            case 'C':
                i++;
                res += 90;
                break;
            default:
                res += 10;
                break;
            }
            break;
        case 'L':
            res += 50;
            break;
        case 'C':
            switch (s[i + 1])
            {
            case 'D':
                i++;
                res += 400;
                break;
            case 'M':
                i++;
                res += 900;
                break;
            default:
                res += 100;
                break;
            }
            break;
        case 'D':
            res += 500;
            break;
        case 'M':
            res += 1000;
            break;
        }
    }

    return res;
}

int main()
{
    string s;
    cin >> s;
    cout << romanToInt(s) << endl;
}