#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int places[3] = {1, 0, 0};

    for (int i = 0; i < n; i++)
    {
        int tmp, place1, place2;
        cin >> place1 >> place2;
        place1--;
        place2--;

        tmp = places[place1];
        places[place1] = places[place2];
        places[place2] = tmp;
    }

    for (int i = 0; i < 3; i++)
    {
        if (places[i])
        {
            cout << i + 1 << endl;
            return 0;
        }
    }

    return 0;
}