#include <iostream>

using namespace std;

int main()
{
    int k,res = 0;
    cin >> k;
    char num[k], in;
    cin >> num;
    for (int i = 0; i < k; i++)
    {
        string n;
        cin >> n;
        for (int j = 0; j < 10; j++) {
            if (num[i] == n[j]) {
                res += (j < 5) ? j : (9 - j);
                break;
            }
        }
    }
    cout << res << endl;
    return 0;
}