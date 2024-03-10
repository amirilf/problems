#include <iostream>

using namespace std;

int main()
{
    int n, result = 0;
    cin >> n;
    int list[n];

    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
    }

    /*
        the purpose of the following loop is that if there is a list like the following example,
        all its successive subsets can be obtained and their totals can be compared.

        e.g.

            list => [1,2,3,4,5]

            subsets =>
                length = 1 => (1) (2) (3) (4) (5)
                length = 2 => (1,2) (2,3) (3,4) (4,5)
                length = 3 => (1,2,3) (2,3,4) (3,4,5)
                length = 4 => (1,2,3,4) (2,3,4,5)
                length = 5 => (1,2,3,4,5)
    */

    for (int length_of_group = 1; length_of_group <= n; length_of_group++)
    {

        for (int first_index = 0; first_index <= n - length_of_group; first_index++)
        {

            int sum = 0;

            for (int i = 0; i < length_of_group; i++)
            {
                sum += list[first_index + i];
            }

            if (sum > result)
            {
                result = sum;
            }
        }
    }

    cout << result << endl;

    return 0;
}