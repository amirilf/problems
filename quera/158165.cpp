#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        double n;
        cin >> n;
        string l[3] = {"B", "KiB", "MiB"};
        int c = 0;
        while (n >= 1024)
        {
            c++;
            n /= 1024;
        }
        cout << long(n) << l[c] << endl;

    }
    
    return 0;
}