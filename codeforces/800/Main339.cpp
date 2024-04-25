#include <iostream>

using namespace std;

int main()
{

    int arr[3] = {0};
    string line;
    cin >> line;

    for (int i = 0; line[i]; i += 2)
    {
        switch (line[i])
        {
        case '1':
            arr[0]++;
            break;
        case '2':
            arr[1]++;
            break;
        case '3':
            arr[2]++;
            break;
        }
    }

    string res = "";

    for (int i = 0; i < arr[0]; i++)
        res += "1+";

    for (int i = 0; i < arr[1]; i++)
        res += "2+";

    for (int i = 0; i < arr[2]; i++)
        res += "3+";

    res.pop_back();
    cout << res << endl;
    return 0;
}