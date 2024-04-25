#include <iostream>

using namespace std;

int main()
{
    int shirt_x, shirt_y, man_x, man_y;
    cin >> shirt_x >> shirt_y >> man_x >> man_y;

    if (shirt_x >= man_x && shirt_y >= man_y)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}
