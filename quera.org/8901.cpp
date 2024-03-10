#include <iostream>

using namespace std;

void ArrayPositionSwapper(int array[], char position1, char position2)
{
    int first, second;

    if (position1 == 'L')
        first = 0;
    else if (position1 == 'M')
        first = 1;
    else
        first = 2;

    if (position2 == 'L')
        second = 0;
    else if (position2 == 'M')
        second = 1;
    else
        second = 2;

    if (array[first] || array[second])
    {
        array[first] = array[first] ^ array[second];
        array[second] = array[first] ^ array[second];
        array[first] = array[first] ^ array[second];
    }
}

int main()
{
    int positions[3] = {0};
    int n;

    char position;
    cin >> n >> position;

    if (position == 'M')
        positions[1] = 1;
    else if (position == 'R')
        positions[2] = 1;
    else
        positions[0] = 1;

    for (int i = 0; i < n; i++)
    {
        char first_position, second_position;
        cin >> first_position >> second_position;
        ArrayPositionSwapper(positions, first_position, second_position);
    }

    if (positions[0])
        cout << 'L' << endl;
    else if (positions[1])
        cout << 'M' << endl;
    else
        cout << 'R' << endl;

    return 0;
}