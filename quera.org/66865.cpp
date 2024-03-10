#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int numbers[n];
    bool is_ok = true;

    // checker shows number of ups & downs
    // ascending (0 -> null | 1 -> true | -1 -> false)
    int checker = 0, ascending = 0;
    for (int i = 0; i < n; i++)
    {
        // get the number
        cin >> numbers[i];

        // i -> not for the first item
        // is_ok -> if we reach a point where we change the value of is_ok to false,
        // we don't need to check the rest of numbers completely because we know this is not a good farm anymore (:
        if (i && is_ok)
        {
            if (numbers[i - 1] < numbers[i])
            {
                // if it's already 1 means we're still going up & that's ok
                if (ascending != 1)
                {
                    ascending = 1;
                    checker++;

                    if (checker > 2 && is_ok)
                        is_ok = false;
                }
            }
            else if (numbers[i - 1] > numbers[i])
            {
                // we're still going down
                if (ascending != -1)
                {
                    ascending = -1;
                    checker++;

                    if (checker > 2 && is_ok)
                        is_ok = false;
                }
            }
            else
            {
                if (checker == 2)
                {
                    is_ok = false;
                    break;
                }
            }
        }
    }

    if (is_ok)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}