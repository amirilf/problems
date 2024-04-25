#include <iostream>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    string x_str = string(m, 'X');
    string dot_str = string(m, '.');

    for (int i = 0; i < n; i++)
        cout << x_str << dot_str << x_str << endl;
    for (int i = 0; i < n; i++)
        cout << dot_str << x_str << dot_str << endl;
    for (int i = 0; i < n; i++)
        cout << x_str << dot_str << x_str << endl;
}
