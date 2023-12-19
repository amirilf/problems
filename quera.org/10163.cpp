#include <iostream>

using namespace std;

int main()
{

    int a, b, c, min_time = 101, max_time = 0, expense = 0;
    cin >> a >> b >> c;
    int times[100] = {};

    for (int person = 0; person < 3; person++)
    {
        int check_in, check_out;
        cin >> check_in >> check_out;

        if (check_in < min_time)
            min_time = check_in;
        if (check_out > max_time)
            max_time = check_out;

        for (int j = check_in; j < check_out; j++)
            times[j] += 1;
    }

    for (int time = min_time; time < max_time; time++)
    {
        if (times[time] == 1)
            expense += a;
        else if (times[time] == 2)
            expense += 2 * b;
        else if (times[time] == 3)
            expense += 3 * c;
    }

    cout << expense << endl;

    return 0;
}
