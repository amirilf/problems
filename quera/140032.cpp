#include <iostream>

using namespace std;

int main()
{
    int lis[5], tmp;
    for (int i = 0; i < 5; i++) cin >> lis[i];
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (lis[i] > lis[j])
            {
                tmp = lis[i];
                lis[i] = lis[j];
                lis[j] = tmp;
            }            
        }
    }
    bool a = lis[0] + lis[1] > lis[2];
    bool b = lis[1] + lis[2] > lis[3];
    bool c = lis[2] + lis[3] > lis[4];
    cout << ((a || b || c) ? "YES" : "NO") << endl; 
    return 0;
}