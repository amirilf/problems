#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int a, b, x, counter = 0;
    cin >> a >> b >> x;

    int sqrt_a = sqrt(a);
    int sqrt_b = sqrt(b);

    int list_a[sqrt_a] = {};
    int list_b[sqrt_b] = {};

    int index_a = 0;
    for (int i = 1; (i <= sqrt_a) && ((a % i) <= x); i++)
    {
        if (a % i == 0)
        {
            list_a[index_a] = i;
            index_a++;
            if (i != sqrt_a)
            {
                list_a[index_a] = a / i;
                index_a++;
            }
        }
    }

    int index_b = 0;
    for (int i = 1; (i <= sqrt(b)) && ((b % i) <= x); i++)
    {
        if (b % i == 0)
        {
            list_b[index_b] = i;
            index_b++;
            if (i != sqrt_b)
            {
                list_b[index_b] = b / i;
                index_b++;
            }
        }
    }

    for (int a_item = 0; a_item < index_a; a_item++)
    {
        for (int b_item = 0; b_item < index_b; b_item++)
        {
            if (list_a[a_item] + list_b[b_item] <= x)
                counter++;
        }
    }

    cout << counter << endl;
    return 0;
}